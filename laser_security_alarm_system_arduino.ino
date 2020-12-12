int j;
float abc;
int ledPinA = 11;
int buzzerPin=9;
int ledPin=8;
int ldrPin=A1;
 void setup() {
  Serial.begin(9600);

 pinMode(ledPinA,OUTPUT);
 pinMode(ledPin,OUTPUT);
 pinMode(buzzerPin,OUTPUT);
 pinMode(ldrPin,INPUT);
}

void loop() {
 digitalWrite(ledPinA ,HIGH);
 j=analogRead(A1);
 abc=(5.0/1023.0)*j;
 
 if(abc>4){
  
  digitalWrite(ledPin,HIGH);
  tone(buzzerPin,1000);
  delay(100);
  tone(buzzerPin,0);
  delay(100);
 }

}
