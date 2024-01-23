#include <iostream>
#include <string>
using namespace std;

bool checkDivisibleBy3(string s)
{
	int sum = 0, len = s.length();
	for (int i = 0; i < len; ++i)
		sum += (int(s[i] - '0') % 3);
	return sum % 3 == 0;
}

bool checkDivisibleBy4(string s)
{
	int len = s.length();
	if (len == 0)
		return true;
	int lastDigit = int(s[len - 1] - '0');
	if (len == 1)
		return lastDigit % 4 == 0;
	int secondLastDigit = int(s[len - 2] - '0');
	return (secondLastDigit * 10 + lastDigit) % 4 == 0;
}

bool solution(string s)
{
	return checkDivisibleBy3(s) && checkDivisibleBy4(s);
}

int main()
{
	string num = "12244824607284961224";
	if (solution(num))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}