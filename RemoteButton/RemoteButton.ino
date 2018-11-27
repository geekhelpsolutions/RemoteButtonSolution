/*
 Name:		RemoteButton.ino
 Created:	11/25/2018 11:21:53 PM
 Author:	grant
*/

#include <FS.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <WiFi.h>
#include <WILCO.h>

WILCO wilco;

void setup() {
	Serial.begin(115200);
	wilco.begin();
}

void loop() {
	wilco.loop();
}
