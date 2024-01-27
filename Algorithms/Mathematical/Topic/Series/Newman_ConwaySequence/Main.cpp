#include <iostream>
#include <vector>
using namespace std;

int solution(int n)
{
    vector<int> v(n+1,0);
    v[1] = 1, v[2] = 1;
    for (int i = 3; i <= n; ++i)
        v[i] = v[v[i-1]] + v.at(i-v.at(i-1));
    return v.at(n);
}

int main()
{
    int n = 10;
    cout << solution(n);
    return 0;
}