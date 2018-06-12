int entrada = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(entrada);
  Serial.println(value);
  delay(500);
}

