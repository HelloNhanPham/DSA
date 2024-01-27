#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> primeShieve(int num)
{
    vector<bool> table(num+1, true);
    table[0] = table[1] = false;
    for (int i = 2; i <= num; ++i)
    {
        if (table.at(i))
        {
            for (int j = 2; i * j <= num; ++j)
                table[i*j] = false;
        }
    }
    return table;
}

bool isSquare(int n)
{
    int sr = sqrt(n);
    return (sr * sr == n);
}

bool checkFibonacci(int i)
{
    return (isSquare(5 * i * i + 4) > 0 || isSquare(5 * i * i - 4) > 0);
}

void solution(int num)
{
    vector<bool> prime = primeShieve(num);
    for (int i = 1; i <= num; ++i)
        if (checkFibonacci(i) && prime.at(i))
            cout << i << " ";
}

int main()
{
    int num = 100;
    solution(num);
    return 0;
}