#include "Problems.h"


//Problems::Problems()
//{
//}

std::string Problems::bmi(double w, double h)
{
	double bmiTest = w / h / h;
	double bmiD = w / (h * h);
	float bmi = w / (h * h);
	if (bmi <= 18.5) return "Underweight";
	if (bmi <= 25.0) return "Normal";
	if (bmi <= 30.0) return "Overweight";
	return "Obese";
}

int Problems::cockroach_speed(double s)
{
	return 0;
}

double Problems::Add(double x, double y)
{
	return x + y;
}
