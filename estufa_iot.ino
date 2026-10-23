// Definicao dos pinos
const int pinoSensor = A0;
const int pinoLED    = 6;
const int pinoBuzzer = 7;
const int pinoMotor  = 9;

void setup() {
  // Inicializa o Monitor Serial para acompanhar a temperatura
  Serial.begin(9600);

  // Configura os atuadores como SAIDA (OUTPUT)
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoMotor, OUTPUT);
}

void loop() {
  // 1. Leitura do sensor TMP36 e conversao para graus Celsius
  int leitura = analogRead(pinoSensor);
  float tensao = leitura * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;

  // Imprime a temperatura no Monitor Serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  // 2. Regra: se temperatura >= 30 °C, aciona o motor (ventilador)
  if (temperatura >= 30.0) {
    digitalWrite(pinoMotor, HIGH);
  } else {
    digitalWrite(pinoMotor, LOW);
  }

  // 3. Regra: se temperatura > 50 °C, aciona LED e buzina (emergencia)
  if (temperatura > 50.0) {
    digitalWrite(pinoLED, HIGH);
    digitalWrite(pinoBuzzer, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
    digitalWrite(pinoBuzzer, LOW);
  }

  delay(500); // Aguarda meio segundo entre cada leitura
}
