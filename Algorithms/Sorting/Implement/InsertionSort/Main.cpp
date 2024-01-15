#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array[] = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void InsertionSort(int a[], int n)
{
	int index = 0;
	while (index < n - 1)
	{
		if (a[index] > a[index + 1])
		{
			int temp = a[index + 1];
			int index_sp = index;
			while (a[index_sp] > temp && index_sp >= 0)
			{
				a[index_sp+1] = a[index_sp];
				index_sp--;
			}
			a[index_sp+1] = temp;
		}
		index++;
	}
	cout << "Sorted successfully!" << endl;
}

int main()
{
	int a[] = { 12, 11, 13, 5, 6 };
	int n = 5;
	printArray(a, n);
	InsertionSort(a, n);
	printArray(a, n);
	return 0;
}