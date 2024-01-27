#include <iostream>
using namespace std;

bool solution(int n)
{
    for (int i = 2; i < n; ++i)
        if (n%i==0)
            return false;
    return true;
}

int main()
{
    int num = 23;
    cout << "Check prime number of " << num << " is: ";
    solution(num)?cout << "YES": cout << "NO" << endl;
    return 0;
}