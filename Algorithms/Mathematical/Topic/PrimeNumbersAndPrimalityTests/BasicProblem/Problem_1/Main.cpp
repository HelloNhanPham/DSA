#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void createPrimeShieve(vector<bool>& primeTable, int num)
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
    vector<bool> primeTable (num+1, true);
    createPrimeShieve(primeTable, num);
    bool flag = false;
    for (int i = 2; i <=sqrt(num); ++i)
        if (num%i==0 && primeTable.at(i) && primeTable.at(num/i))
        {
            cout << i << ", " << num/i;
            flag = true;
            break;
        }
    if (!flag)
        cout << "Not Possible!";
}

int main()
{
    int num = 16;
    solution(num);
    return 0;
}