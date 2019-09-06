// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Clase6.ino
    Created:	30/08/2019 04:12:41 p. m.
    Author:     LAPTOP-4TS5ROAQ\HP
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts

#include "NiMU_ESP32.h"
#include "PWMESP32.h"

NiMU nimu;
PWM pwm;
ulong start_time;
uint16_t delay_period(500);
uint8_t i;
void setup()
{
	Serial.begin(115200);
	uint8_t a = 260;
	Serial.println(a);
	Serial.println(i);
	uint16_t b = 260;
	delay(1000);
	start_time = millis();

	pwm.setup(LED_BUILTIN, 1000, 0, 16);
	
};

// Add the main program code into the continuous loop() function

void loop()
{

	/*if (millis() - start_time >= delay_period)
		start_time = millis();
		nimu.led.toggleLED();
	*/
	for (i = 0; i < 100; i++)
	{
		pwm.setPWM(i);
		Serial.println(i);
		delay(40);
	}

		delay(3000);
	for (i = 100; i > 0; i--)
	{
		pwm.setPWM(i);
		delay(40);
	}
	if (i <= 0)
		delay(3000);
}
