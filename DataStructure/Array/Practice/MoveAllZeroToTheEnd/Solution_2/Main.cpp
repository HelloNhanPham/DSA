#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void MoveAllZeroToEnd(int a[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			swap(a[j], a[i]);
			j++;
		}
	}
}

int main()
{
	int a[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	MoveAllZeroToEnd(a, n);
	printArray(a, n);
	return 0;
}