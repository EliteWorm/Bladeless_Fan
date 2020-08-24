//Bladeless Fan by Elite Worm (YouTube.com/c/EliteWorm)
//Version 1.0.0

//Connections:
//Potentiometer wiper to P2
//P0 to ESC input signal

void setup() {
  
  pinMode(A1, INPUT);
  pinMode(0, OUTPUT);
  
}

void loop() {
  
  digitalWrite(0, HIGH);
  int timehigh = map(analogRead(A1), 0, 1023, 1000, 1500);
  delayMicroseconds(timehigh);
  digitalWrite(0, LOW);
  delayMicroseconds(10000);
  delayMicroseconds(10000 - timehigh);

}
