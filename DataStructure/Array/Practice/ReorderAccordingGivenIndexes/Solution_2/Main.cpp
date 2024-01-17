#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void reorderGivenIndexes(int arr[], int index[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		while (index[i] != i)
		{
			swap(arr[index[i]], arr[i]);
			swap(index[i], index[index[i]]);
		}
	}
	cout << "Done successfully!" << endl;
}

int main()
{
	int arr[] = { 50, 40, 70, 60, 90 }, index[] = { 3, 0, 4, 1, 2 };
	int n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	reorderGivenIndexes(arr, index, n);
	printArray(arr, n);
	return 0;
}