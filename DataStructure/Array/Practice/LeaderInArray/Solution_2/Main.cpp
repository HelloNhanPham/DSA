#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void printLeader(int a[], int n)
{
	if (n == 0)
	{
		cout << "There is no leader in the array!" << endl;
		return;
	}
	int current_max = a[n - 1];
	cout << "Leaders in the array is: " << current_max << " ";
	for (int i = n - 2; i >= 0; --i)
	{
		if (a[i] > current_max)
		{
			cout << a[i] << " ";
			current_max = a[i];
		}
	}
	cout << endl;
}

int main()
{
	int a[] = { 16,17,8,10,5,2,3,1 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printLeader(a, n);
	return 0;
}