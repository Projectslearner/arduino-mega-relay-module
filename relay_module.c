/*
    Project name : Relay Module
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-relay-module
*/

const int relayPin = 7; // Pin connected to the relay module

void setup() {
  Serial.begin(9600);      // Initialize serial communication
  pinMode(relayPin, OUTPUT); // Set relay pin as OUTPUT
}

void loop() {
  Serial.println("Turning relay ON");
  digitalWrite(relayPin, HIGH); // Turn the relay on
  delay(2000); // Wait for 2 seconds

  Serial.println("Turning relay OFF");
  digitalWrite(relayPin, LOW); // Turn the relay off
  delay(2000); // Wait for 2 seconds
}
