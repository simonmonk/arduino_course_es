const int zumbador = 13;

int octava[] = {261, 294, 330, 349, 392, 440, 493};

void setup()
{
  pinMode(zumbador, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 7; i++)
  {
    tone(zumbador, octava[i]);
    delay(500);
  }
  noTone(zumbador);
  delay(1000);
}

