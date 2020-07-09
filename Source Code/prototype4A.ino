int ip = 6, buzzer =5;

void setup() {
  
  Serial.begin(9600);
  pinMode(ip, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
}
void loop() {
  
  while(digitalRead(ip)==HIGH)
   {
    digitalWrite(LED_BUILTIN, HIGH);

   }
   while(digitalRead(ip)==LOW)
   {
    digitalWrite(LED_BUILTIN, LOW);
     digitalWrite(buzzer, HIGH); 
     delay(1);
     digitalWrite(buzzer, LOW); 
     delay(1);
    }
   
  delay(1000);
}
