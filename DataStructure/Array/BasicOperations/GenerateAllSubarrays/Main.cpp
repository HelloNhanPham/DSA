#include <iostream>
using namespace std;

void printArray(int a[], int l, int r)
{
	cout << "[";
	for (int i = l; i < r; ++i)
		cout << a[i] << ",";
	cout << a[r] << "]";
}

void printSub(int a[], int n, int begin, int end)
{
	if (end == n)
		return;
	else if (begin > end)
		printSub(a, n, 0, end + 1);
	else
	{
		printArray(a, begin, end);
		printSub(a, n, begin + 1, end);
	}
	return;
}

void printSubArray(int a[], int n)
{
	printSub(a, n, 0, 0);
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7 };
	int n = sizeof(a) / sizeof(int);
	printSubArray(a, n);
	return 0;
}