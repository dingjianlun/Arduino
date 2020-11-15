
#define PinA 2
#define PinB 3
#define PinC 4
#define PinD 5
#define PinE 6
#define PinF 7
#define PinG 8
#define PinH 9

#define COM1 10
#define COM2 11
#define COM3 12
#define COM4 13

//数码管0-F码值
const int num[10][8] = {
  {0, 0, 0, 0, 0, 0, 1, 1},//0
  {1, 0, 0, 1, 1, 1, 1, 1},//1
  {0, 0, 1, 0, 0, 1, 0, 1},//2
  {0, 0, 0, 0, 1, 1, 0, 1},//3
  {1, 0, 0, 1, 1, 0, 0, 1},//4
  {0, 1, 0, 0, 1, 0, 0, 1},//5
  {0, 1, 0, 0, 0, 0, 0, 1},//6
  {0, 0, 0, 1, 1, 1, 1, 1},//7
  {0, 0, 0, 0, 0, 0, 0, 1},//8
  {0, 0, 0, 0, 1, 0, 0, 1},//9
};

void setup() {
  pinMode(PinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinC, OUTPUT);
  pinMode(PinD, OUTPUT);
  pinMode(PinE, OUTPUT);
  pinMode(PinF, OUTPUT);
  pinMode(PinG, OUTPUT);
  pinMode(PinH, OUTPUT);

  pinMode(COM1, OUTPUT);
  pinMode(COM2, OUTPUT);
  pinMode(COM3, OUTPUT);
  pinMode(COM4, OUTPUT);
}

void loop() {
  display(COM1, 1, false);
  display(COM2, 2, true);
  display(COM3, 3, false);
  display(COM4, 4, false);
}

void display(int com, int n, boolean dot)
{
  digitalWrite(PinA, HIGH);
  digitalWrite(PinB, HIGH);
  digitalWrite(PinC, HIGH);
  digitalWrite(PinD, HIGH);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, HIGH);
  digitalWrite(PinG, HIGH);
  digitalWrite(PinH, HIGH);

  digitalWrite(COM1, LOW);
  digitalWrite(COM2, LOW);
  digitalWrite(COM3, LOW);
  digitalWrite(COM4, LOW);

  digitalWrite(com, HIGH);


  digitalWrite(PinA, num[n][0]);
  digitalWrite(PinB, num[n][1]);
  digitalWrite(PinC, num[n][2]);
  digitalWrite(PinD, num[n][3]);
  digitalWrite(PinE, num[n][4]);
  digitalWrite(PinF, num[n][5]);
  digitalWrite(PinG, num[n][6]);
  digitalWrite(PinH, (dot ? LOW : HIGH));
}
