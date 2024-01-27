#include <iostream>
#include <math.h>
using namespace std;

void solution(int num)
{
	if (num <= 1)
	{
		cout << num << endl;
		return;
	}
	cout << num << " ";
	float tmp = num % 2 == 0 ? 0.5 : 1.5;
	solution((int)pow(num, tmp));
}

int main()
{
	int num = 3;
	solution(num);
	return 0;
}