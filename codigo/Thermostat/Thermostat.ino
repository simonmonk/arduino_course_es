#include <SimpleThermistor.h>

const int led = 9;
//                                         pin, R25,   B,    R2
SimpleThermistor sensor = SimpleThermistor(A0, 1000.0, 3800, 1000.0);

void setup()
{
  pinMode(led, 9);
}

void loop()
{
    if (sensor.getTempC() > 30.0)
    {
      digitalWrite(led, HIGH);
    }
    else
    {
      digitalWrite(led, LOW);
    }
}
