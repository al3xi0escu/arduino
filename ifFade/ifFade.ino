int lightValue = 0; // Set value of lightValue to 0
int delta = 1; // Set value of delta to 1

void setup() {
  Serial.begin(9600); // Set baud rate to 9600 
  pinMode(9, OUTPUT); // Sets pin 9 to output
}

void loop() {
  lightValue = lightValue + delta; // Add lightValue to delta to make a new lightValue 
  if (lightValue <= 0 || lightValue >= 255) { // If lightValue is smaller or equal to 0 and greater or equal to 255 line 12 runs
    delta = -delta; // The variable negates the value of delta
  }
  analogWrite(9, lightValue); // Sends integer to pin 9 in analog form
  Serial.println(lightValue); // Sends integer to serial monitor
  delay(10); // The program stos for 10 milliseconds
}
