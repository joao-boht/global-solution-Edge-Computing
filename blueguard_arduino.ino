
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2 // Pino digital onde o DHT11/DHT22 está conectado
#define DHTTYPE DHT22 // Altere para DHT11 se estiver usando DHT11
#define PH_PIN A0 // Pino analógico onde o potenciômetro está conectado

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço I2C do display LCD 16x2

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  // Leitura dos sensores
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  float analogValue = analogRead(PH_PIN);
  float phValue = analogValue * (5.0 / 1023.0);

  // Verifica se houve erro na leitura do sensor DHT
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Display da temperatura
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.print(" C");
  delay(5000); // 5 segundos de delay

  // Display da umidade
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Umidade:");
  lcd.setCursor(0, 1);
  lcd.print(humidity);
  lcd.print(" %");
  delay(5000); // 5 segundos de delay

  // Display do pH
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("pH:");
  lcd.setCursor(0, 1);
  lcd.print(phValue);
  delay(5000); // 5 segundos de delay
}