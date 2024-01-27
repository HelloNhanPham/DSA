#include <iostream>
#include <vector>
using namespace std;

void createPrimeShieve(int num, vector<bool> &primeTable)
{
    primeTable[0] = primeTable[1] = false;
    int index = 2;
    while (index <= num)
    {
        if (primeTable[index])
        {
            int temp = 2;
            while (index*temp <= num)
            {
                primeTable[index*temp] = false;
                temp++;
            }
        }
        index++;
    }
}

void solution(int num)
{
    vector<bool> primeShieve(num+1, true);
    createPrimeShieve(num, primeShieve);
    for (int i = 2; i <= num/2; ++i)
    {
        if (primeShieve.at(i) && primeShieve.at(num - i))
        {
            cout << i << ", " << num - i;
            break;
        }
    }
}

int main()
{
    int num = 74;
    solution(74);
    return 0;
}