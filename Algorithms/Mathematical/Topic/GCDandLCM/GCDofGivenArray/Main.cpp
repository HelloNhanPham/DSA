#include <iostream>
using namespace std;

int gcd(int A, int B) {
    if (B == 0)
        return A;
    return gcd(B, A % B);
}

long long findGCD(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; ++i)
        res = gcd(res, arr[i]);
    return res;
}

int main()
{
    int arr[] = { 32, 4, 60, 8, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findGCD(arr, n) << endl;
	return 0;
}