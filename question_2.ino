const byte ledPin =13;
void setup() {
  Serial.begin(9600);

  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char val;
  byte LED=13;
  float Analogin;
  int i;
  float Vin;
  
Setup: Analogin = 0; Loop:
for (i=0;i<=5;i++)
Analogin = 0.7* Analogin + 0.3* analogRead(A0);
Vin = Analogin * 5 / 1024;
 Serial.print(Vin);
 Serial.print("\n");
 
delay (500);
}
