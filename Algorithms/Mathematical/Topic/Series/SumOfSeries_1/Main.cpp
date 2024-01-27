#include <iostream>
using namespace std;
 
int sumOfSeries(int n)
{
    return (n * (2 * n - 1) * (2 * n + 1)) / 3;
}
 
int main()
{
    int n = 10;
    cout << sumOfSeries(n);
    return 0;
}