#include <ESP8266WiFi.h>
#include "./defines.h"

void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    digitalWrite(LED, HIGH);
    delay(1000);
    blink(GE_ERR_NO_WIFI_COUNT, GE_ERR_NO_WIFI_TIME);
}

void loop()
{
    // code...
}