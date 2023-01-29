#IFNDEF TEMPERATURESENSOR
#DEFINE TEMPERATURESENSOR

// Температура по Фаренгейту
typedef float Temperature;

// Число, однозначно определяющее положение датчика
typedef unsigned int Location;

class TemperatureSensor {
public:
	TemperatureSensor(Location);
	~TemperatureSensor();
	void calibrate(Temperature actualTemperature);
	Temperature currentTemperature() const;
private:

};

class ActiveTemperatureSensor {
public:
	ActiveTemperatureSensor(Location, void (*f)(Location, Temperature));
	~ActiveTemperatureSensor();
	void calibrate(Temperature actualTemperature);
	void establishSetpoint(Temperature setpoint, Temperature delta);
	Temperature currentTemperature() const;
private:

};

#ENDIF
