#include <iostream>
#include <vector>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void RotateLeft(int a[], int n, int k)
{
	vector<int> v(n);
	for (int i = n - k + 1; i < n; ++i)
		v[i - n + k - 1] = a[i];
	for (int i = 0; i < n - k + 1; ++i)
		v[i + n - k] = a[i];
	for (int i = 0; i < n; ++i)
		a[i] = v[i];
	cout << "Rotate successfully!" << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	cout << "Rotate left 5 times!" << endl;
	RotateLeft(a, n, 5);
	printArray(a, n);
	return 0;
}