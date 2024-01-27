#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int num)
{
    vector<int> v(num+1,0);
    v[1] = 1;
    for (int i = 2; i <= num; ++i)
    {
        if (v[i] == 0)
        {
            v[i] = i;
            int start = 2;
            while (start * i <= num)
            {
                if (v[start*i]==0)
                    v[start*i] = i;
                start++;
            }
        }
    }
    return v;
}

int main()
{
    int num = 10;
    solution(num);
    vector<int> leastPrimeFactor = solution(num);
    for (int i = 1; i <= num; ++i)
        cout << i << " -> " << leastPrimeFactor.at(i) << endl;
    return 0;
}