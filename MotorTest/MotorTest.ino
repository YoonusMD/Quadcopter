int state=1;
int Arming_Time=0;
int m1 = 2;
int m2 = 3;
int m3 = 5;
int m4 = 6;

int Pulse=1000;

void setup()
{
  pinMode(m1, OUTPUT);pinMode(m2, OUTPUT);pinMode(m3, OUTPUT);pinMode(m4, OUTPUT);
  for (Arming_Time = 0; Arming_Time < 500; Arming_Time += 1)
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, HIGH);
    delayMicroseconds(1100);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    delay(20-(Pulse/1000));
  }
}

void loop()
{
  for  (Pulse = 1150; Pulse <= 1400; Pulse += 1)
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, HIGH);
    delayMicroseconds(1250);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    delay(20-(1250/1000));
  }
}
