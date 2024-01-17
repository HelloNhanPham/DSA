#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void findSubarrayGivenSum(int a[], int n, int sum)
{
	bool flag = false;
	for (int i = 0; i < n - 1; ++i)
	{
		if (a[i] == sum)
		{
			cout << "Sum found at index " << i << endl;
			flag = true;
			return;
		}
		int temp = a[i];
		for (int j = i + 1; j < n; ++j)
		{
			temp += a[j];
			if (temp == sum)
			{
				cout << "Sum found between indexes " << i << " and " << j << endl;
				flag = true;
				return;
			}
			if (a[j] > sum)
				break;
		}
	}
	if (!flag)
		cout << "No subarray found" << endl;
}

int main()
{
	int arr[] = { 1, 4, 0, 0, 3, 10, 5 }, sum = 7;
	int n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	findSubarrayGivenSum(arr, n, sum);

	int arr2[] = { 1, 4 }, sum2 = 0;
	int n2 = sizeof(arr2) / sizeof(int);
	printArray(arr2, n2);
	findSubarrayGivenSum(arr2, n2, sum2);
	return 0;
}