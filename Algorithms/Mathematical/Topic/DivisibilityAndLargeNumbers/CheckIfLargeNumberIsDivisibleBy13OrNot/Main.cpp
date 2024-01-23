#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool solution(string s)
{
	int len = s.length();
	if (len % 3 == 1) {
		s += "00";
		len += 2;
	}
	else if (len % 3 == 2)
	{
		s += "0";
		len += 1;
	}
	int index = len - 1, sum = 0, p = 1;
	while (index >= 0)
	{
		int group = 0;
		group += s[index] - '0';
		group += (s[index - 1] - '0') * 10;
		group += (s[index - 2] - '0') * 100;
		sum += (p * group);
		p *= (-1);
		index -= 3;
	}
	return abs(sum) % 13 == 0;
}

int main()
{
	string number = "83959092724";
	if (solution(number))
		cout << number << " is divisible by 13.";
	else
		cout << number << " is not divisible by 13.";
	return 0;
	return 0;
}