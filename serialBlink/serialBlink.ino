void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Sets baud rate to 9600
  Serial.setTimeout(10); // Make arduino check serial buffer every 10 milliseconds
  Serial.println("Hello"); // Made Arduino say Hello when it boots up
  Serial.println("Send 'On' to turn on the LED."); // Make the light turn on in respons to my commands via serial monitor
  Serial.println("Send 'Off' to turn off the LED."); // Make the light turn Off in respons to my commands via serial monitor
  pinMode(13, OUTPUT); // Made pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // Checks to see if anything is in the serial buffer
    String command; // Creates a variable "command"
    command = Serial.readString(); // Sets value of command to serial buffer
    if (command == "On") { // If command variable is on the next lines are true
      Serial.println("OK, turning the light  on..."); // Tells serial buffer to say " " when it turns the light on
      digitalWrite(13, HIGH); // Makes the light turn on
    }
    else if (command == "Off") { // If command variable is off the next lines are true
      Serial.println("OK, turning the light off..."); // Tells serial buffer to say " " when it turns the light off
      digitalWrite(13, LOW); // makes the light turn off
    }
  }
}
