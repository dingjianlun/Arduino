
#define MOTOR_EN_1_2  10
#define MOTOR_IN1     9
#define MOTOR_IN2     8

void setup() {
  pinMode(MOTOR_EN_1_2, OUTPUT);
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
}

void loop() {

  analogWrite(MOTOR_EN_1_2, 255 * 0.7);
  digitalWrite(MOTOR_IN1, HIGH);
  digitalWrite(MOTOR_IN2, LOW);
  delay(3000);

  analogWrite(MOTOR_EN_1_2, 255 * 0.7);
  digitalWrite(MOTOR_IN1, LOW);
  digitalWrite(MOTOR_IN2, HIGH);
  delay(3000);

}
