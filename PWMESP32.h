// PWMESP32.h

#ifndef _PWMESP32_h
#define _PWMESP32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class PWM
{
public:
	PWM();
	PWM(uint8_t pin);
	~PWM();
	void setup(uint8_t pin, float frequency, uint8_t channel, uint8_t bits_resolution);
	void setPWM(float duty_cycle);
	void setFrequency(float frequency);
protected:
	uint8_t _pin;
	float _duty_cycle;
	uint16_t _bits_resolution;
	float _frequency;
	uint8_t _channel;
	uint16_t _resolution;
};
#endif

