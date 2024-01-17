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

void printSubarrayWithGivenSum(int a[], int n, int sum)
{
	int currentSum = a[0], start = 0;
	for (int i = 1; i <= n; ++i)
	{
		while (currentSum > sum && start < i - 1)
		{
			currentSum -= a[start];
			start++;
		}
		if (currentSum == sum)
		{
			cout << "Sum found between indexes " << start << " and " << i - 1;
			return;
		}
		if (i < n)
			currentSum += a[i];
	}
	cout << "No subarray found";
}

int main()
{
	int a[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int size = sizeof(a) / sizeof(int);
	printArray(a, size);
	printSubarrayWithGivenSum(a, size, 23);
	return 0;
}