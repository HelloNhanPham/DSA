#include <iostream>
#include <math.h>
using namespace std;

bool solution_support(int num, int divisor)
{
    if (divisor == 1)
        return true;
    if (num%divisor == 0)
        return false;
    return solution_support(num, divisor-1);
}

bool solution(int num)
{
    return solution_support(num, sqrt(num));
}

int main()
{
    cout << "Check prime of number 11: " << solution(11) << endl;
    cout << "Check prime of number 15: " << solution(15);
    return 0;
}