#IFNDEF GROWINGPLAN
#DEFINE GROWINGPLAN

#include "temperaturesensor.h"

// Число, обозначающее день года
typedef unsigned int Day;

// Число, обозначающее час дня
typedef unsigned int Hour;

// Булевский тип
enum Lights {OFF, ON};

// Число, обозначающее показатель кислотности в диапазоне от 1 до 14
typedef float pH;

// Число, обозначающее концентрацию в процентах: от 0 до 100
typedef float Concentration;

// Структура, определяющая условия в теплице

struct Condition {
	Temperature temperature;
	Lights lighting;
	pH acidity;
	Concentration concentration;
};

class GrowingPlan {
public:
	GrowingPlan(char *name);
	virtual ~GrowingPlan();
	void clear();
	virtual void establish(Day, Hour, const Condition&);
	const char* name() const;
	const Condition& desiredConditions(Day, Hour) const;

protected:

};

#ENDIF
