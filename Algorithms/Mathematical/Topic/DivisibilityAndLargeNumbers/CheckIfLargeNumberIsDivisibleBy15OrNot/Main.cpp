#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy5(string s)
{
	int len = s.length();
	if (len == 0)
		return false;
	return (s[len - 1] == '0' || s[len - 1] == '5');
}

bool isDivisibleBy3(string s)
{
	int sum = 0, len = s.length();
	for (int i = 0; i < len; ++i)
		sum += (s[i] - '0');
	return sum % 3 == 0;
}

bool solution(string s)
{
	return isDivisibleBy3(s) && isDivisibleBy5(s);
}

int main()
{
	string num = "156457463274623847239840239402394085458848462385346236482374823647643742374523747264723762374620";
	solution(num) ? cout << "Yes" : cout << "No";
	return 0;
}