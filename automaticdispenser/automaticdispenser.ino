/*
 here is the code for NodeMCU 
*/


int IRpin = A0;     // the number of the ir sensor input pin 
int Motorpin = D6;      // the number of the motor  pin



void setup() {
  // initialize the ir pin  as an input:
  pinMode(IRpin, INPUT);
  // initialize the motor pin as an output:
  pinMode(Motorpin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // read the state of the IRvalue value:
  sensorvalue = analogRead(IRpin);

  // check if the IR sensor is interrupted by its values . if interrupted its values will be less than 900:
  while (sensorvalue < 900){
    digitalWrite(Motorpin,HIGH); // switching on the motor
    delay(500);// delay of 1/2 second
    digitalWrite(Motorpin,LOW);// switching off the motor again
    break;     
  }
  
}
