#include "Problems.h"


//Problems::Problems()
//{
//}

std::string Problems::printerError(const std::string& s)
{
	//int errors{ 0 };
	//for (char c : s)
	//{
	//	if (c > 'm')
	//	{
	//		errors++;
	//	}
	//}
	//return std::to_string(errors) + '/' + std::to_string(s.length());
	auto const errors = std::count_if(s.begin(), s.end(), [](const char c)
		{
			return c > 'm';
		});
	return std::to_string(errors) + "/" + std::to_string(s.length());
}

//Lambda and switch statement
int Problems::getCount(const std::string& inputStr) {
	return std::count_if(inputStr.begin(), inputStr.end(), [](const char c) {
		switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
		}
		});
}

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
