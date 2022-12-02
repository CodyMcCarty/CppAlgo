#include <string>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <array>
#include <vector>

#pragma once
class Problems
{
public:
	/** Beginner Series #4 Cockroach
	* The cockroach is one of the fastest insects. Write a function which takes its 
	speed in km per hour and returns it in cm per second, rounded down to the 
	integer (= floored).

	*For example:
	1.08 --> 30
	Note! The input is a Real number (actual type is language dependent) and is >= 0. The result should be an Integer.
	*/
	int cockroach_speed(double s);
	/**
	* takes an array of strings as an argument and returns a sorted array containing the same strings, 
	* ordered from shortest to longest.
	*/
	std::vector<std::string> sortByLength(std::vector<std::string> array);
	std::string abbrevName(std::string name);
	std::string printerError(const std::string& s);
	double Add(double x, double y);
	std::string bmi(double w, double h);
	int getCount(const std::string& inputStr);
	
};

