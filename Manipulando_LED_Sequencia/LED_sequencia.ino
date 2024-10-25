// C++ code
//
int tempo = 0;

void setup()
{
  pinMode(13, OUTPUT);

  tempo = 1000;
}

void loop()
{
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(13, HIGH);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(13, LOW);
}