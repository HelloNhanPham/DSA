#include <iostream> 
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void printUnique(int a[], int n)
{
	cout << "Unique of elements in the array is: ";
	for (int i = 0; i < n - 1; ++i)
	{
		bool flag = false;
		for (int j = i + 1; j < n; ++j)
			if (a[j] == a[i])
			{
				flag = true;
				break;
			}
		if (flag == false)
			cout << a[i] << " ";
	}
}

int main()
{
	int a[] = { 1,2,3,4,3,2,5,6,7,8,9,10,7,9 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printUnique(a, n);
	return 0;
}