// Motor 1 connection

int enA = 9;
int in1 = 6;
int in2 = 5;

// Motor 2 connection
int enB = 3;
int in3 = 7;
int in4 = 8;

void setup() {
  
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT); 
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  
 //Case1: Maximum speed for both motors
 //PWM possible values are 0 to 255
  
 analogWrite(enA, 255);
 analogWrite(enB, 255);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);  
 delay(5000);
  
  //Case2: Turn off motors
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW); 
  delay(5000);
  
 //Case3: Reversing the direction
 analogWrite(enA, 255);
 analogWrite(enB, 255); 
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
 delay(5000);
  


}