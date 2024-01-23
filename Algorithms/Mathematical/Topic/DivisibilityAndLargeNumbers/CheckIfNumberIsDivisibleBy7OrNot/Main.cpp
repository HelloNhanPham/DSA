#include <iostream>
using namespace std;

bool checkDivisibleBy7(int num)
{
	if (num < 0)
		return checkDivisibleBy7((-1) * num);
	if (num == 0 || num == 7)
		return true;
	if (num < 10)
		return false;
	return checkDivisibleBy7(num / 10 - 2 * (num - num / 10 * 10));
}

int main()
{
	int num = 616;
	if (checkDivisibleBy7(num))
		cout << "Divisible";
	else
		cout << "Not Divisible";
	return 0;
}