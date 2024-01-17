#include <iostream>
#include <stack>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void printLeader(int a[], int n)
{
	if (n == 0)
	{
		cout << "There is no leader in the array!" << endl;
		return;
	}
	stack<int> st;
	st.push(a[n - 1]);
	for (int i = n - 2; i >= 0; --i)
	{
		if (a[i] > st.top())
			st.push(a[i]);
	}
	cout << "The leaders in the array are: ";
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}

int main()
{
	int a[] = { 16, 17, 4, 3, 5, 2 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printLeader(a, n);
	return 0;
}