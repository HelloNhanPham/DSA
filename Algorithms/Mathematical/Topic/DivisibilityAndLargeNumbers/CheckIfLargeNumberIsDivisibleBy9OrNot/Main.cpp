#include <iostream>
#include <string>
using namespace std;

bool checkIsDivisibleBy9(string s)
{
	int sum = 0, len = s.length();
	for (int i = 0; i < len; ++i)
		sum += (int(s[i] - '0') % 9);
	return sum % 9 == 0;
}

int main()
{
	string str = "99333";
	checkIsDivisibleBy9(str) ? cout << "Yes" : cout << "No";
	cout << endl;
	string str1 = "9231";
	checkIsDivisibleBy9(str1) ? cout << "Yes" : cout << "No";
	return 0;
}