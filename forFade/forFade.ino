void setup() {
  Serial.begin(9600); // Sets baud rate to 9600
  pinMode(9, OUTPUT); // Sets pin 9 to output

}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // Gradually increase brightness of LED to the maximum value of 255
    analogWrite(9, lightValue); // This is the pin and value
    Serial.println(lightValue); // Set output lightValue to LED
    delay(10); // Says how many milliseconds the LED is on
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // Gradually decrease brightness of LED to the minimum value of 0 
    analogWrite(9, lightValue); // This is the pin and value
    Serial.println(lightValue); // Set output lightValue to LED
    delay(10); // Says how many milliseconds the LED is off
  }
}
