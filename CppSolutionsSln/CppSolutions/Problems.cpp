#include "Problems.h"


//Problems::Problems()
//{
//}

//[-5, 15, 25, 35, 45, 55, 65, 75, 85, 95, 100, 115, 125, 135, 145, 155, 165, 175, 185, 195]
int Problems::search(std::vector<int>& nums, int target)
{
	int l = 0, r = nums.size() - 1;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (nums[m] == target) return m;
		else if (target > nums[m]) l = m + 1;
		else if (target < nums[m]) r = m - 1;
	}

	return -1;
}

bool Problems::isValid(std::string s)
{
	std::unordered_map<char, int> count;
	//auto glambda = [](auto a, auto&& b) { return a < b; };
	//auto addMap = [](auto c) {(count.find(c) == count.end()) ? count[c] = 1 : count[c] += 1; };

	for (auto c : s)
	{
		switch (c)
		{
		//case '(':
		//{
		//	(count.find(c) == count.end()) ? count[c] = 1 : count[c] += 1;
		//	break;
		//}
		case '[':
		case '(':
		//{
		//	(count.find(c) == count.end()) ? count[c] = 1 : count[c] += 1;
		//	break;
		//}
		case '{':
		{
			(count.find(c) == count.end()) ? count[c] = 1 : count[c] += 1;
			break;
		}
		case ')':
		{
			char o = '(';
			if (count.find(o) == count.end() || count[o] == 0)
			{
				return false;
			}
			else count[o] -= 1;
			break;
		}
		}
	}
	
	for (auto const& x : count)
	{
		if (x.second != 0) return false;
	}

	auto x = count['('];
	return count['('] == 1;
}

int Problems::maxProfit(std::vector<int>& prices)
{
	int diff = 0, price = prices[0];
	for (int r = 1; r < prices.size(); r++)
	{
		price = std::min(price, prices[r]);
		diff = std::max(diff, prices[r] - price);
	}
	return diff;
}

std::vector<int> Problems::twoSum(std::vector<int>& nums, int target)
{
	for (int i{ 0 }; i < nums.size(); i++) {
		for (int j{ i + 1 }; j < nums.size(); j++) {
			if (i + j == target) {
				return { i, j };
			}
		}
	}
	return { 0, 0, 0 };
}


std::string Problems::no_space(std::string x)
{
	x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
	return x;
}


std::vector<std::string> Problems::sortByLength(std::vector<std::string> array)
{
	std::sort(array.begin(), array.end(), [](auto s1, auto s2) { return s1.length() < s2.length(); });
	return array;
	// instead of auto s1 -> auto const & s1,... 
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
