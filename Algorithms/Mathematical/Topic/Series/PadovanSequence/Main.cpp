#include <iostream>
using namespace std;

long long solution(int num)
{
	if (num < 3)
		return 1;
	return solution(num - 2) + solution(num - 3);
}

int main()
{
	int num = 3;
	cout << solution(num);
	return 0;
}