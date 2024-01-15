#include <iostream>
#include <algorithm>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int m = a[i], index = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (m > a[j])
			{
				m = a[j];
				index = j;
			}
		}
		swap(a[i], a[index]);
	}
}

void printArray(int a[], int n)
{
	cout << "Array[] = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	selectionSort(a, n);
	cout << "Sorting successfully!" << endl; 
	printArray(a, n);
	return 0;
}