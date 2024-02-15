#include <iostream>
using namespace std;

int solution(int a[], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {    
        if (a[i]==count)
            count++;
        else
            return count;
    }
    return count;
}

int main()
{
    int a[100] = {0, 1, 2, 6, 9};
    int n = 5, m = 10;
    int count = 0;
    cout << solution(a, n, m);
    return 0;
}