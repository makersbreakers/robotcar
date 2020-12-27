// Map pins on L298N to Arduino
#define m1enA 9
#define m1in1 7
#define m1in2 6

void setup() {
  // Setup pins Arduino to send signal to L298N:
  pinMode(m1enA, OUTPUT);
  pinMode(m1in1, OUTPUT);
  pinMode(m1in2, OUTPUT);
 }

void loop() {
  // Turn left  
  digitalWrite(m1in1, HIGH);
  digitalWrite(m1in2, LOW);
  
  //increase speed (Question: What is a better initial value for speed?)
  for (int speed = 0; speed < 255; speed +=5){
    analogWrite(m1enA, speed); // Send PWM signal to motor 1
    delay(200); // run at this speed for 200ms
  }
  delay(2000); // wait for 2s

  //Turn right
  digitalWrite(m1in1, LOW);
  digitalWrite(m1in2, HIGH);
  
  //increase speed (Question: What is a better initial value for speed?)
  for (int speed = 0; speed < 255; speed +=5){
    analogWrite(m1enA, speed); // Send PWM signal to motor 1
    delay(200); // run at this speed for 200ms
  }
  delay(2000); // wait for 2s
}
