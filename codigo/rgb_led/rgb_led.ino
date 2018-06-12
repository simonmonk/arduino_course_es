const int redLedPin = 3;
const int greenLedPin = 5;
const int blueLedPin = 6;
const int switchPin = A0;

const int numColors = 10;

int colors[numColors][3] = {
  {0, 0, 0}, // negro - off
  {255, 255, 255}, // blanco
  {255, 0, 0}, // jojo
  {0, 255, 0}, // verde
  {0, 0, 255}, // azul
  {255, 255, 0}, // amarillo
  {255, 127, 0}, // naraja
  {0, 255, 255}, // 
  {255, 0, 255}, //
  {0, 0, 0},
};

int color = 0;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  int red = colors[color][0];
  int green = colors[color][1];
  int blue = colors[color][2];
  
  analogWrite(redLedPin, red);
  analogWrite(greenLedPin, green);
  analogWrite(blueLedPin, blue);

  if (digitalRead(switchPin) == LOW) {
    color ++;
    if (color == numColors) {
      color = 0;
    }
    delay(200);
  }
}
