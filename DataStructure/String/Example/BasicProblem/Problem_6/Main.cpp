#include <iostream>
#include <string>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

bool isBinary(string str)
{
    int len = str.length();
    for (int i = 0; i < len; ++i)
        if (str[i] != '0' && str[i] != '1')
            return false;
    return true;
}