int switchPin = 13;
int led = 9;

int previo = LOW;
int incendido = LOW;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  int siguiente = digitalRead(switchPin);
  if (siguiente != previo ) {
    if (siguiente == LOW) {
      incendido = ! incendido;
      digitalWrite(led, incendido);
      delay(100); // debounce
    }
    previo = siguiente;
  }
}

