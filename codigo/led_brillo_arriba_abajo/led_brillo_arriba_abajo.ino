int led = 9;
int period = 5;

void setup() {
  pinMode(led , OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i++) {
    analogWrite(led, i);
    delay(period);
  }
  for (int i = 0; i < 255; i++) {
    analogWrite(led, 255-i);
    delay(period);
  }
}

