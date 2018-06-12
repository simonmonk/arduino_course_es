int entrada = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(entrada);
  float voltage = value * 5.0 / 1023;
  Serial.println(voltage);
  delay(500);
}

