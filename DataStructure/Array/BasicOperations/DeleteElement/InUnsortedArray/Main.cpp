#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void deleteElement(int a[], int &n, int k)
{
	int index = 1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == k)
		{
			index = i;
			break;
		}
	}
	for (int i = index; i < n - 1; ++i)
		a[i] = a[i + 1];
	a[n-1] = 0;
	n--;
	cout << "Delete successfully!" << endl;
}

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	cout << "Deleting 5 in array!" << endl;
	deleteElement(a, n, 5);
	printArray(a, n);
	return 0;
}