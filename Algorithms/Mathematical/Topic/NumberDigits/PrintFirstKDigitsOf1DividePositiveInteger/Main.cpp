#include <iostream>
using namespace std;

void solution(int n, int k)
{
	int count = 0, currentValue = 10;
	while (count < k)
	{
		cout << int(currentValue / n);
		currentValue = 10 * (currentValue % n);
		count++;
	}
}

int main()
{
	int num = 50, k = 4;
	solution(num, k);
	return 0;
}