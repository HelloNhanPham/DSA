#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool solution(string s)
{
	int sumOdd = 0, sumEven = 0;
	int index = 0, len = s.length();
	while (index < len)
	{
		int temp = int(s[index] - '0');
		index % 2 == 0 ? sumEven += temp : sumOdd += temp;
		index++;
	}
	return abs(sumEven - sumOdd) % 11 == 0;
}

int main()
{
	string str = "76945";
	solution(str) ? cout << "Yes" : cout << "No ";
	return 0;
}