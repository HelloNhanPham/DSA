#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b; 
	b = temp;
}

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = n - 1; j > i; --j)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
	}
	cout << "Sorted successfully!" << endl;
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
	int a[] = { 10,6,7,3 };
	int n = 4;
	printArray(a, n);
	BubbleSort(a, n);
	printArray(a, n);
	return 0;
}