const byte ledPin =13;
void setup() {
  Serial.begin(9600);

  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char val;
  byte LED=13;
  
if(Serial.available()){
     val=Serial.read();  
     switch(val)
     {
       case '1':
       {
         digitalWrite(LED,HIGH);
         Serial.print("LED ON\n");
         delay(2000);
         break;
         
       }
     case '0':
     {
         digitalWrite(LED,LOW);
         Serial.print("LED OFF\n");
           delay(2000);
           break;
     }
     }
  }
}
