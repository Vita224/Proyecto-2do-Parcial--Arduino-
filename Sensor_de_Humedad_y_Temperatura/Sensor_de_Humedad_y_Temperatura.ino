float temp;
int tempPin = 9;

void setup()
{
  Serial.begin(9600);
}void loop()
{
  temp = analogRead(tempPin);
  temp = temp * 0.0777777777777778;
  Serial.println(temp);
  delay(1000);
}
