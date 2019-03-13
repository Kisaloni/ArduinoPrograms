String  name;
void setup()
{
Serial.begin(9600);

name = "Hy";
  Serial.println();
  Serial.print("String Object:");
  Serial.println("name = "+name);
  name = "Hello";
  Serial.println("name = "+name);
  Serial.println("name.charAt(4)");
  Serial.println(name.charAt(4));
  Serial.println("name.compareTo(\"Hello\")");
  Serial.println(name.compareTo("Hello"));
  Serial.println("name.compareTo(\"Hello\")");
  Serial.println(name.compareTo("Hexllo"));
  Serial.println("name.indexOf(\"llo\")");
  Serial.println(name.indexOf("llo"));
  Serial.println("name.concat(\" Hy\")");
  name.concat(" Hy");
  Serial.println("name = "+name);
  name = "1234";
  Serial.println("name.length()");
  Serial.println(name.length());
  Serial.println("name.toInt()");
  Serial.println(name.toInt());
  Serial.println("name.toFloat()");
  Serial.println(name.toFloat());
}


void loop()
{


    
}
