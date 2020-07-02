int const trigPin = 10, echoPin = 9, buzzPin = 2;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzPin, OUTPUT); 
}
void loop()
{

int ms, range;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);

ms = pulseIn(echoPin, HIGH);
range = (ms/2) / 29.1;
if (range <= 10 && range >= 0) {

digitalWrite(buzzPin, HIGH);
delay(10);
} else {

digitalWrite(buzzPin, LOW);
delay(10);
}

delay(60);
}
