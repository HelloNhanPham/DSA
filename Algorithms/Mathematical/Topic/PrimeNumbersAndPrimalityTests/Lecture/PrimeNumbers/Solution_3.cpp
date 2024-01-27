#include <iostream>
#include <math.h>
using namespace std;

bool solution(int num)
{
    if (num < 2 || num==4)
        return false;
    for (int i = 5; i <= sqrt(num); i += 6)
        if (num%i==0 || num%(i+2)==0)
            return false;
    return true;
}

int main()
{
    solution(11) ? cout << "True" : cout << "No";
    return 0;
}