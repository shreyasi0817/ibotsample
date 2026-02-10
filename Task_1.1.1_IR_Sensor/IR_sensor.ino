void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int v = analogRead(A0);

  if(v > 500)
  {
    Serial.print("White object detected, Value = ");
    Serial.println(v);
  }
  else
  {
    Serial.print("Black object detected, Value = ");
    Serial.println(v);
  }

  delay(200);
}
