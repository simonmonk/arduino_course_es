int led1 = 13;
int led2 = 9;
int period = 1000;

void setup() {
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
}

void loop() {
  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , LOW);
  delay(period);
  digitalWrite(led1 , LOW);
  digitalWrite(led2 , HIGH);
  delay(period);
}


