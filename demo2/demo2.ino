
const int buttonPin = 2;
const int ledPin =  8;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
  
  Serial.println(buttonState);
}
