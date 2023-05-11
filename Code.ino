// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(9, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
}
