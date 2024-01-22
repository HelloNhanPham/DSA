#include <iostream>
#include <string>
using namespace std;

bool checkDivisibleBy2(string s)
{
	int len = s.length();
	if (len == 0)
		return false;
	return s[len - 1] % 2 == 0;
}

bool checkDivisibleBy3(string s)
{
	int sum = 0, len = s.length();
	for (int i = 0; i < len; ++i)
		sum += (int(s[i] - '0') % 3);
	return sum % 3 == 0;
}

bool solution(string s)
{
	return (checkDivisibleBy2(s) && checkDivisibleBy3(s));
}

void printString(string s, int no)
{
	cout << "String " << no << ": " << s << endl;
}

void printResult(string s)
{
	if (solution(s))
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}

int main()
{

	string str1 = "2112" , str2 = "1124", str3 = "363588395960667043875487";
	printString(str1, 1);
	printResult(str1);
	printString(str2, 2);
	printResult(str2);
	printString(str3, 3);
	printResult(str3);
	return 0;
}