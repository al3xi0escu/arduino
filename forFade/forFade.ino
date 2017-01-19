void setup() {
  Serial.begin(9600); // Sets baud rate to 9600
  pinMode(9, OUTPUT); // Sets pin 9 to output

}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // Gradually increase brightness of LED to the maximum value of 255
    analogWrite(9, lightValue); // Sends integer to pin 9 in analog form
    Serial.println(lightValue); // Sends integer to serial monitor
    delay(10); // Says how many milliseconds the LED is on
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // Gradually decrease brightness of LED to the minimum value of 0 
    analogWrite(9, lightValue); // Sends integer to pin 9 in analog form
    Serial.println(lightValue); // Sends integer to serial monitor
    delay(10); // Says how many milliseconds the LED is off
  }
}
