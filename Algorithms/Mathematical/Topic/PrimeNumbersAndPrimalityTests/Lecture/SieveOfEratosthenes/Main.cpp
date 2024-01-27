#include <iostream>
#include <vector>
using namespace std;

void makeSieve(int num)
{
    vector<bool> v(num+1, true);
    v[0] = false, v[1] = false;
    int index = 2;
    while (index <= num)
    {
        if (v[index])
        {
            int temp = 2;
            while (index*temp <= num)
            {
                v[index*temp] = false;
                temp++;
            }
        }
        index++;
    }
    for (int i = 0; i <= num; ++i)
        if (v[i])
            cout << i << " ";
}

int main()
{
    makeSieve(100);
    return 0;
}