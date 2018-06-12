const int zumbador = 13;

int notaAlta = 500;
int notaBaja = 300; 
int periodo = 500;

void setup()
{
  pinMode(zumbador, OUTPUT);
}

void loop()
{
  tone(zumbador, notaAlta);
  delay(periodo);
  tone(zumbador, notaBaja);
  delay(periodo);
}

