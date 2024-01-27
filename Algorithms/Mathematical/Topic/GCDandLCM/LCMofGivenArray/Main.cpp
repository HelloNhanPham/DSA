#include <iostream>
using namespace std;

int gcd(int A, int B) {
    if (B == 0)
        return A;
    return gcd(B, A % B);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

long long findLCM(int arr[], int n)
{
    int currentLCM = arr[0];
    for (int i = 0; i < n; ++i)
        currentLCM = lcm(currentLCM, arr[i]);
    return currentLCM;
}

int main()
{
    int arr[] = { 2, 7, 3, 9, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findLCM(arr, n);
	return 0;
}