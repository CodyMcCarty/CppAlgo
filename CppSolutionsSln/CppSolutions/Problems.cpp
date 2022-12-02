#include "Problems.h"


//Problems::Problems()
//{
//}


std::vector<std::string> Problems::sortByLength(std::vector<std::string> array)
{
	std::sort(array.begin(), array.end(), [](std::string const& s1, std::string const& s2) { return s1.size() < s2.size(); });
	return array;
}

std::string Problems::abbrevName(std::string name)
{
	//std::string ret;
	//ret.push_back(toupper(name[0]));
	//ret.push_back('.');
	//ret.push_back(toupper(name[name.find(' ') + 1]));

	//const char a = std::toupper(name[0]);
	//const char b = std::toupper(name[name.find(' ') + 1]);
	//return std::string({ a, '.', b });

	std::string initials{ name[0], '.', name[name.find(' ') + 1]};
	for (auto &c : initials) c = toupper(c);
	return initials;
}

std::string Problems::printerError(const std::string& s)
{
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
