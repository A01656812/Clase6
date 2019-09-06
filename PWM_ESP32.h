// PWM_ESP32.h

#ifndef _PWM_ESP32_h
#define _PWM_ESP32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class PWM
{
public:
	PWM(uint8_t pin);
	PWM();
	~PWM();
	void begin();
	void setPWM(float duty_cicle);
	
};

#endif
