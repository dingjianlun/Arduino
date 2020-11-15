
const int sensor = A0;
const int sensorRead = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensor);
  
  int value = map(sensorValue, 0, 1023, 0, 255);
  Serial.println(value);
  
  analogWrite(9, value);
  
  delay(100);
}
