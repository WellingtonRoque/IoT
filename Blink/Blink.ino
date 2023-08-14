// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(26, OUTPUT);
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(26, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("on");
  delay(1000);                       // wait for a second
  digitalWrite(26, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("off");
  delay(1000);                       // wait for a second
}
