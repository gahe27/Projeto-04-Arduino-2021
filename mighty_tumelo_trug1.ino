const int pLedR = 11, pLedG = 9, pLedB = 10;
void setup()
{
  pinMode(pLedR, OUTPUT);
  pinMode(pLedG, OUTPUT);
  pinMode(pLedB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int r, g, b;
  for(r = 0; r < 256; r+=5){
    for(g = 0; g < 256; g+=5){
      for(b = 0; b < 256; b+=5){
      	analogWrite(pLedR, r);
        analogWrite(pLedG, g);
        analogWrite(pLedB, b);
        delay(100);
        Serial.print(r);
        Serial.print(" ");
        Serial.print(g);
        Serial.print(" ");
        Serial.println(b);
      }
    }
  }
  delay(5000);
}