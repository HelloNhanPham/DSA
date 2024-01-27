#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}

// GCD(LCM(x,y),LCM(x,z)) = LCM(x,GCD(y,z))
int solution(int x, int y, int z)
{
	return LCM(x, GCD(y, z));
}

int main()
{
	int x = 30, y = 40, z = 400;
	//int x = 15, y = 20, z = 100;
	cout << solution(x, y, z);
	return 0;
}