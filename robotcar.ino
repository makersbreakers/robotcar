/*  Arduino DC Motor Control - PWM | H-Bridge | L298N
         Example 02 - Arduino Robot Car Control
    by Dejan Nedelkovski, www.HowToMechatronics.com
*/

#define moter1vorne 4
#define moter1zuruck 5

#define moter2vorne 7
#define moter2zuruck 6


void setup() {
  pinMode(moter1vorne, OUTPUT);
  pinMode(moter1zuruck, OUTPUT);
  
  pinMode(moter2vorne, OUTPUT);
  pinMode(moter2zuruck, OUTPUT);
 
    
}

void loop() {
    for (int i = 0; i < 4; i++) {
      digitalWrite(moter1vorne, LOW);
      digitalWrite(moter1zuruck, LOW);
      digitalWrite(moter2vorne, HIGH);
      digitalWrite(moter2zuruck, LOW);
      delay(720);
      // turn 90 degrees left
      digitalWrite(moter1vorne, HIGH);
      digitalWrite(moter1zuruck, LOW);
      // Set Motor B forward
      digitalWrite(moter2vorne, HIGH);
      digitalWrite(moter2zuruck, LOW);
      delay(1000);
      //wait a second
    }
     for (int i = 0; i < 4; i++) {
      digitalWrite(moter1vorne, HIGH);
      digitalWrite(moter1zuruck, LOW);
      digitalWrite(moter2vorne, LOW);
      digitalWrite(moter2zuruck, LOW);
      delay(720);
      // turn 90 degrees left
      // Set Motor A vorward
      digitalWrite(moter1vorne, HIGH);
      digitalWrite(moter1zuruck, LOW);
      // Set Motor B forward
      digitalWrite(moter2vorne, HIGH);
      digitalWrite(moter2zuruck, LOW);
      delay(1000);
      //wait a second
     }
}
