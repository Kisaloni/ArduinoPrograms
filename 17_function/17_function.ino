void fun() {
  Serial.println("hello World");
}

float add(float x, float y) {
  return x + y;
}

void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println();
  fun();
  Serial.println((add(12.5, 12.5)));
}


void loop()
{
  
}
