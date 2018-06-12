int switchPin = 13;

void setup() {
  pinMode(switchPin , INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(switchPin);
  Serial.println(value);
  delay(1000);
}

