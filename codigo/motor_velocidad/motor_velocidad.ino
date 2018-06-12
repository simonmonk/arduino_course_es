const int motorPin = 9;

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Velocidad 0 a 255");
}

void loop()
{
  if (Serial.available())
  {
    int v = Serial.parseInt();
    if (v >= 0 && v <= 255)
    {
      analogWrite(motorPin, v);
      Serial.println(v);
    }
    else 
    {
      Serial.println("0 a 255");
    }
  }
}

