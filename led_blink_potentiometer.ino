int i,j;
float abc;
int readval=A5;
void setup() {
   Serial.begin(9600);
   pinMode(A5,INPUT);
   for (int i=8; i<13; i++)
   { 
     pinMode(i,OUTPUT);
   }

}

void loop() {
  j=analogRead(readval);
  abc=(5.0/1023.0)*j;
  if(abc>=0) 
  {
    for(int i=7; i<=abc+7; i++)
    {
      digitalWrite(i,HIGH);
      delay(200);
    }
     for(i=8+abc; i<=12; i++)
     {
      digitalWrite(i,LOW);
      delay(200);
     }
  }
}
    
  


