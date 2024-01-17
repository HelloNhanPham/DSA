#include <iostream>
#include <queue>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void arrangeArray(int a[], int n)
{
	queue<int> q;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != -1)
		{
			q.push(a[i]);
			a[i] = -1;
		}
	}
	while (!q.empty())
	{
		a[q.front()] = q.front();
		q.pop();
	}
	cout << "Arrange successfully!" << endl;
}

int main()
{
	int a[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	arrangeArray(a, n);
	printArray(a, n);
	return 0;
}