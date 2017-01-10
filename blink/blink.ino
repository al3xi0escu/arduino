void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH); // This starts the led at pin 13
  delay(1000); // This says how many secs the led should shine
  digitalWrite(12, LOW); // This stops the led
  delay(2000); // This says how many secs the led shouldn't shine
  digitalWrite(12, HIGH); // This starts the led again
  delay(500); // This this tells the led how many secs it should stay on
  digitalWrite(12, LOW); // This stops the led again
  delay(3000); // This says how many secs the led shouldn't shine
  digitalWrite(12, HIGH); // This starts the led again
  delay(250); // This says how many secs the led should shine
  digitalWrite(12, LOW); // This stops the led
  delay(1000); // This says how many secs the led shouldn't shine
  digitalWrite(12, HIGH); // This starts the led again
  delay(1500); // This says how many secs the led should shine
  digitalWrite(12, LOW); // This stops the led
  delay(500); // This says how many secs the led shouldn't shine
  

}
