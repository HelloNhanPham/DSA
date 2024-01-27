#include <iostream>
#include <math.h>
using namespace std;

bool solution(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num%i==0)
            return false;
    return true;
}

int main()
{
    int num = 23;
    cout << "Check prime of number " << num << " is:";
    solution(num) ? cout << "Yes" : cout << "No";
    return 0;
}