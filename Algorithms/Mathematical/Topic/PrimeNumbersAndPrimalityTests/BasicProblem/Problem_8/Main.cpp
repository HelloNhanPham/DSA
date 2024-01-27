#include <iostream>
#include <math.h>
using namespace std;

bool solution(int num)
{
    if (num < 2)
        return true;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num%i==0)
            return true;
    return false;
}

int main()
{
    int num = 21;
    cout << "Check composite number " << num << " is: " << solution(num);
    cout << endl;
    num = 11;
    cout << "Check composite number " << num << " is: " << solution(num);
    return 0;
}