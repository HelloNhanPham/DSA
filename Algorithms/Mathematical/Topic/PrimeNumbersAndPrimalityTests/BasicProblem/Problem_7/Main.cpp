#include <iostream>
#include <math.h>
using namespace std;

void solution(int num)
{
    while (num%2==0)
    {
        cout << 2 << " ";
        num/=2;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        while (num%i == 0)
        {
            cout << i << " ";
            num /= i;
        }
    }
    if (num > 2)
        cout << num << " ";
}

int main()
{
    int num = 315;
    solution(num);
    return 0;
}