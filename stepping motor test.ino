// stepping motor test example
// Made by Byoung Joo Kwak and Muntak Son
int A=2;   // arduino digital output port
int Ap=3;  // arduino digital output port
int B=5;   // arduino digital output port
int Bp=4;  // arduino digital output port
void setup() {
 pinMode(A, OUTPUT);
 pinMode(Ap, OUTPUT);
 pinMode(B, OUTPUT);
 pinMode(Bp, OUTPUT);
 
}
int speed=5;    //stepping motor speed
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Bp, LOW);
  digitalWrite(A, HIGH);
  delay(speed);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(speed);
  digitalWrite(B, LOW);
  digitalWrite(Ap, HIGH);
  delay(speed);
  digitalWrite(Ap, LOW);
  digitalWrite(Bp, HIGH);
  delay(speed);
   
}
