int pin = 13;
int period = 1000;

void setup() {
  pinMode(pin , OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
  delay(period );
  digitalWrite(pin, LOW);
  delay(period );
}

