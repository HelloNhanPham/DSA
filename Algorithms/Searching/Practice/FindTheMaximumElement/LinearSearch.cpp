#include <iostream>
using namespace std;

int MaxElement(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; ++i)
		if (a[i] > max)
			max = a[i];
	return max;
}

void findMaxElement(int a[], int n)
{
	if (n == 0)
		return;
	cout << "The max element in the array is: " << MaxElement(a, n);
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1 };
	int size = sizeof(arr) / sizeof(int);
	cout << "Array[] = ";
	printArray(arr, size);
	findMaxElement(arr, size);
	return 0;
}