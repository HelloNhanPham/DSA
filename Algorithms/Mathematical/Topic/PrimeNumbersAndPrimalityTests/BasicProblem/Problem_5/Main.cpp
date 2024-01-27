#include <iostream>
#include <vector>
using namespace std;

void createPrimeShieve(int R, vector<bool> &primeShieve)
{
    primeShieve[0] = primeShieve[1] = false;
    int index = 2;
    while (index <= R)
    {
        if (primeShieve[index])
        {
            int temp = 2;
            while (index * temp <= R)
            {
                primeShieve[index* temp] = true;
                temp++;
            }
        }
        index++;
    }
}

void updateFrequency(vector<int> &v, int value)
{
    while (value != 0)
    {
        v[value%10]++;
        value/=10;
    }
}

void solution(int L, int R)
{
    vector<bool> primeShieve (R + 1, true);   
    createPrimeShieve(R, primeShieve);
    vector<int> frequency (10, 0);
    for (int i = L; i <= R; ++i)
        if (primeShieve.at(i))
            updateFrequency(frequency, primeShieve.at(i));
    int maxFre = 0, index = -1;
    for (int i = 0; i < 10; ++i)
    {
        if (frequency[i] >= maxFre && i > index)
        {
            index = i;
            maxFre = frequency[i];
        }
    }
    if (maxFre == 0)
    {
        cout << "-1";
        return;
    }
    cout << index;
}

int main()
{
    int L = 1, R = 20;
    solution(L,R);
    return 0;
}