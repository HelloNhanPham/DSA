#include <iostream>
#include <vector>
using namespace std;

vector<bool> primeShieve(int num)
{
    vector<bool> v(num+1, true);
    v[0] = v[1] = false;
    for (int i = 2; i < num; ++i)
    {
        if (v.at(i))
        {
            for (int j = 2; i * j <= num; ++j)
                v[i*j] = false;
        }
    }
    return v;
}

void solution(int num)
{
    vector<bool> shieve = primeShieve(num);
    int cnt = 1;
    for (int i = 2; i <= num; ++i)
    {
        if (shieve.at(i))
        {
            if (shieve.at(cnt))
                cout << i << " ";
            cnt++;
        }
    }
}

int main()
{
    int num = 17;
    solution(num);
    return 0;
}