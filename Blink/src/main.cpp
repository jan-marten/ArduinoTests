#include "Arduino.h"

/*
BN: Arduino/Genuino Uno
VID: 0x2341
PID: 0x0043
SN: 7583033393835141F091

*/

void setup()
{
	Serial.begin(115200);
	pinMode(LED_BUILTIN, OUTPUT);  // set pin as output
}

void loop()
{
	for (int i = 0; i < 100; i++) {

		digitalWrite(LED_BUILTIN, HIGH);  // set the LED on
		delay(1000);               // wait for a second
		digitalWrite(LED_BUILTIN, LOW);   // set the LED off
		delay(1000);               // wait for a second

		digitalWrite(LED_BUILTIN, HIGH);  // set the LED on
		delay(250);               // wait for a second
		digitalWrite(LED_BUILTIN, LOW);   // set the LED off
		delay(250);               // wait for a second

		Serial.print(F("BLINK:"));
		Serial.println(i);
	}

}