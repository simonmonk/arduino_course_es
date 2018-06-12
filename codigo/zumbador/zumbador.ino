const int zumbador = 13;

void setup()
{
  pinMode(zumbador, OUTPUT);
  Serial.begin(9600);
  Serial.println("Frequencia 100..2000. 0-stop");
}

void loop()
{
  if (Serial.available())
  {
    int f = Serial.parseInt();
    if (f == 0) 
    {
      noTone(zumbador);
    }
    else
    {
      tone(zumbador, f);
    }
  }
}

