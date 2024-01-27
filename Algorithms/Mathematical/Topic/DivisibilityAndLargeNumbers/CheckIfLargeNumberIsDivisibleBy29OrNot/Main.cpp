#include <iostream>
using namespace std;

bool solution(long long int num)
{
	while (num >= 100)
		num = 3 * (num % 10) + num / 10;
	return num % 29 == 0;
}

int main()
{
	long long int n = 348;
	if (solution(n))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}