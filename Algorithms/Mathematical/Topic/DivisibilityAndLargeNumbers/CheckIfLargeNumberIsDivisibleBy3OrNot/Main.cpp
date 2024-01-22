#include <iostream>
#include <string>
using namespace std;

bool solution(string s)
{
	int temp = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		temp += (int(s[i] - '0') % 3);
	}
	return temp % 3 == 0;
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

	string str1 = "769452" , str2 = "123456758933312", str3 = "3635883959606670431112222";
	printString(str1, 1);
	printResult(str1);
	printString(str2, 2);
	printResult(str2);
	printString(str3, 3);
	printResult(str3);
	return 0;
}