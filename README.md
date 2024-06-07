# Projeto de Monitoramento da Saúde dos Oceanos

## Descrição

Este projeto visa monitorar a saúde dos oceanos e a poluição utilizando a plataforma Arduino. O sistema mede parâmetros críticos como temperatura, umidade e pH da água, exibindo essas informações em um display LCD 16x2. Esta solução é projetada para ser acessível e eficaz, ajudando pesquisadores, ambientalistas e comunidades costeiras a detectar e responder rapidamente a mudanças na qualidade da água.

## Componentes Utilizados

* Arduino Uno
* Sensor de Temperatura e Umidade DHT22
* Potenciômetro (simulando o sensor de pH)
* Display LCD 16x2 com módulo I2C
* Resistor 4.7kΩ (para o DHT22)
* Breadboard e fios de conexão

## Montagem do Circuito

### Conexões do DHT22

* **VCC** → 5V (Arduino)
* **GND** → GND (Arduino)
* **Dados** → Pino Digital 2 (Arduino)
* **Resistor 4.7kΩ** entre o pino de Dados e o VCC

### Conexões do Potenciômetro

* **Terminal 1** → 5V (Arduino)
* **Terminal 2 (Central)** → Pino A0 (Arduino)
* **Terminal 3** → GND (Arduino)

### Conexões do Display LCD com Módulo I2C

* **GND (módulo I2C)** → GND (Arduino)
* **VCC (módulo I2C)** → 5V (Arduino)
* **SDA (módulo I2C)** → A4 (Arduino)
* **SCL (módulo I2C)** → A5 (Arduino)


## Simulação no Wokwi

O projeto pode ser simulado no Wokwi. Acesse o link abaixo para visualizar a montagem do circuito e testar o código.

 - [Wokwi Simulação](https://wokwi.com/projects/399273108928234497)

## Resultados Esperados

Ao executar o projeto, o display LCD alternará entre a exibição da temperatura, umidade e pH da água em intervalos de 5 segundos. Este monitoramento contínuo permite uma avaliação em tempo real da qualidade da água, ajudando a identificar e responder rapidamente a mudanças ambientais.

## Impacto Positivo

* **Preservação da Vida Marinha:** Monitoramento contínuo ajuda a detectar condições adversas rapidamente, protegendo a vida marinha.

* **Qualidade da Água:** Identificação de poluentes e condições insalubres que podem ser corrigidas.

* **Saúde Humana:** Garantir que a água permanece segura para as comunidades costeiras, promovendo um ambiente saudável.


## Conclusão

Este projeto é uma ferramenta poderosa para monitorar a saúde dos oceanos e a poluição de maneira eficiente e acessível. A implementação com Arduino e sensores permite uma coleta de dados precisa e exibição em tempo real, essencial para a preservação ambiental.

## Participantes

- Joao Boht - rm 558690
- Pedro Certo - rm 556268
- Fabiano Zague - rm 555524
