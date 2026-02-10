#include <Arduino.h>

// Define the pin for the Relay module
const int relayPin = 7; 

void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  
  // Set the relay pin as an output
  pinMode(relayPin, OUTPUT);
  
  // Keep the lock CLOSED by default 
  // (Note: Most relays are 'Active Low', so HIGH means the lock is OFF)
  digitalWrite(relayPin, HIGH); 
}

void loop() {
  // Check if data is available from the Python script
  if (Serial.available() > 0) {
    char data = Serial.read();
    
    // If Python sends '1', unlock the door
    if (data == '1') {
      digitalWrite(relayPin, LOW);  // Activate Relay (Unlock)
      delay(5000);                 // Keep it open for 5 seconds
      digitalWrite(relayPin, HIGH); // Deactivate Relay (Lock)
    }
  }
}
