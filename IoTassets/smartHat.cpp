#include <WiFi101.h>
#include <ArduinoCloud.h>

/////// Wifi Settings ///////
char ssid[] = "";
char pass[] = "";


// Arduino Cloud settings and credentials
const char userName[]   = "lopezdp";
const char thingName[] = "mttqThing";
const char thingId[]   = "16493f54-996b-41d8-9142-96d776604bfe";
const char thingPsw[]  = "7e8171a4-59bf-4eec-a8b2-d704e000c9e2";


WiFiSSLClient sslClient;


// build a new object "mttqThing"
ArduinoCloudThing mttqThing;


void setup() {
  Serial.begin (9600);

  // attempt to connect to WiFi network:
  Serial.print("Attempting to connect to WPA SSID: ");
  Serial.println(ssid);

  while (WiFi.begin(ssid, pass) != WL_CONNECTED) {
    // unsuccessful, retry in 4 seconds
    Serial.print("failed ... ");
    delay(4000);
    Serial.print("retrying ... ");
  }


  mttqThing.begin(thingName, userName, thingId, thingPsw, sslClient);
  mttqThing.enableDebug();


}

void loop() {
  mttqThing.poll();


  delay(1000);

  delay(1000);
}
