
void setup() {
  
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,HIGH);
  
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,HIGH);
  
  digitalWrite(4,LOW);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  
  delay(1000);
  
  digitalWrite(5,HIGH);
  delay(250);
  digitalWrite(5,HIGH);
  delay(250);
  
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  
    digitalWrite(5,HIGH);
  delay(250);
  digitalWrite(5,HIGH);
  delay(250);
  
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
   
   delay(2000);
  }

void loop() {
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    delay(200);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    delay(200);
    
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    delay(200);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    delay(200);
    
}
