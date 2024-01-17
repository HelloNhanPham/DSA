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
		cout << "There is no leader elements in the array!" << endl;
		return;
	}
	cout << "Leader elements in the array: ";
	for (int i = 0; i < n - 1; ++i)
	{
		bool flag = false;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] >= a[i])
			{
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << a[i] << " ";
	}
	cout << a[n-1];
}

int main()
{
	int a[] = { 16,17,8,10,5,3 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printLeader(a, n);
	return 0;
}