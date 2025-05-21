// Test ESP32 Access Point
// en Hanna P 2025

// Load Wi-Fi library
#include <WiFi.h>

// Replace with your network ID
const char* ssid     = "ESP32-Access-Point-test";
const char* password = "11122447766";

// Set web server port number
WiFiServer server(80);

// Variable to store the HTTP request
String header;

void setup() {
  Serial.println("Setup start.. ");
  Serial.begin(115200);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("Access Point IP address is: ");
  Serial.println(IP);

  server.begin();

  Serial.println("Setup done");
}

void loop() {
  // Listen for incoming clients
  WiFiClient client = server.available();

  // If a new client connects
  if (client) {
    Serial.println("New Client.");
    String currentLine = "";

}
