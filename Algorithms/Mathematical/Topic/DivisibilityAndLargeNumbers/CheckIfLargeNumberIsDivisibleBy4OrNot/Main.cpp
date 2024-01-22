#include <iostream>
#include <string>
using namespace std;

bool solution(string s)
{
	int len = s.length();
	if (len == 0)
		return false;
	if (len == 1)
		return (int(s[0] - '0')) % 4 == 0;
	return (int(s[len - 2]) * 10 + s[len - 1]) % 4 == 0;
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

	string str1 = "1124" , str2 = "1234567589333862", str3 = "363588395960667043875487";
	printString(str1, 1);
	printResult(str1);
	printString(str2, 2);
	printResult(str2);
	printString(str3, 3);
	printResult(str3);
	return 0;
}