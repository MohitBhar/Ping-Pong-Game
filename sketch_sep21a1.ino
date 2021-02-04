//Digital Capacitive Touch Sensor Arduino Interfacing
 
#define sensorPin 13 // capactitive touch sensor - Arduino Digital pin D1
#define sensorPin1 11 

int ledPin = 10; // Output display LED (on board LED) - Arduino Digital pin D13

int ledPin1 = 12;

 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
  pinMode(sensorPin, INPUT);
  
  pinMode(ledPin1, OUTPUT);  
  pinMode(sensorPin1, INPUT);
}
 
void loop() {
  int senseValue = digitalRead(sensorPin);
  if (senseValue == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("1");
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.println("0");
  } 
  delay(10);

   int senseValue1 = digitalRead(sensorPin1);
  if (senseValue1 == HIGH){
    digitalWrite(ledPin1, HIGH);
    Serial.println("2");
  }
  else{
    digitalWrite(ledPin1,LOW);
    Serial.println("3");
  } 
  delay(10);
  
}
