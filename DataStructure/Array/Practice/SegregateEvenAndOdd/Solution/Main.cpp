#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
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

void Segregate(int a[], int n)
{
	int count = 0;
	while (a[count] % 2 == 0)
	{
		count++;
	}
	for (int i = count; i < n; ++i)
	{
		if (a[i] % 2 == 0) {
			swap(a[count], a[i]);
			count++;
		}
	}
	cout << "Done successfully!" << endl;
}

int main()
{
	int a[] = { 1,2,4,3,34,45,82,20,3 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	Segregate(a, n);
	printArray(a, n);
	return 0;
}