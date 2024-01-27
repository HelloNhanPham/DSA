#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> makeShieve(int num)
{
    vector<bool> shieve(num+1, true);
    shieve[0] = shieve[1] = false;
    for (int i = 2; i <= num; ++i)
    {
        if (shieve.at(i))
        {
            for (int j = 2; i * j <= num; ++j)
                shieve[i*j] = false;
        }
    }
    return shieve;
}

bool solution(int num)
{
    int cnt = 0, temp = num;
    while (temp != 0)
    {
        cnt++;
        if (temp%10 == 0)
            return false;
        temp/=10;
    }
    vector<bool> shieve = makeShieve(num);
    while (num != 0)
    {
        if (!shieve.at(num))
            return false;
        num = num % (int)pow(10, cnt);
        cnt--;
    }
    return true;
}

int main()
{
    int num = 293;
    cout << solution(num);
    return 0;
}