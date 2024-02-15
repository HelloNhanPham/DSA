#include <iostream>
using namespace std;

int solution(int a[], int n, int m)
{
    if (a[0]!=0)
        return 0;
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (a[mid] == mid)
            l = mid + 1;
        else if (a[mid] > mid)
        {
            if (a[mid-1]==mid-1)
                return mid;
            r = mid - 1;
        }
    }
    return n;
}

int main()
{
    int a[100] = {0, 1, 2, 3, 4};
    int n = 5, m = 10;
    int count = 0;
    cout << solution(a, n, m);
    return 0;
}