#include "temperaturesensor.h"

int main(int argc, char **argv)
{
	Temperature temperature;
	TemperatureSensor greenhouse1Sensor(1);
	TemperatureSensor greenhouse2Sensor(2);
	temperature = greenhouse1Sensor.currentTemperature();
}
