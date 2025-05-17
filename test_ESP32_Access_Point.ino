// Test ESP32 Access Point
// en Hanna P 2025

// Load Wi-Fi library
#include <WiFi.h>

// Replace with your network ID
const char* ssid     = "ESP32-Access-Point-test";
const char* password = "11122447766";

// Set web server port number
WiFiServer server(80);

void setup() {
  Serial.println("Setup start.. ");
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

}
