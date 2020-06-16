int i=0,j=500;
void setup()
{
  for(i=0;i<=3;i++)
   pinMode(i, OUTPUT);
}

void loop()
{ 
  for(j=500;j>=100;j-=100)
  {
    for(i=0;i<=3;i++)
    {
      digitalWrite(i, HIGH);
      delay(j); // Wait for 1000 millisecond(s)
      digitalWrite(i, LOW);
      delay(j); // Wait for 1000 millisecond(s)
    }
  }
 }
