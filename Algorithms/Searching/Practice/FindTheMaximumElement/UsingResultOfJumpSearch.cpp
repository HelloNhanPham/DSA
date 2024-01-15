#include <iostream>
#include <math.h>
using namespace std;

void printArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int MaximumElement(int a[], int n)
{
	int step = sqrt(n);
	int index = 0, temp = a[index];
	while (index < n && temp <= a[index])
	{
		temp = a[index];
		index += step;
	}
	int end = index - step, begin = index;
	if (begin >= n) 
		begin = n - 1;
	while (begin > end && a[begin] < a[begin-1])
		begin--;
	return a[begin];
}

int main()
{
	int a[] = { 120, 100, 80, 20, 0 };
	int n = sizeof(a) / sizeof(int);
	cout << "Array = ";
	printArray(a, n);
	cout << "Maximum number in array is: " << MaximumElement(a, n);
	
	return 0;
}