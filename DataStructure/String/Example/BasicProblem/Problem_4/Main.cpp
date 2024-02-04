#include <iostream>
#include <string>
using namespace std;

char change(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

void solution(string &s)
{
    int len = s.length();
    for (int i = 0; i < len; ++i)
        s[i] = change(s[i]);
}

int main()
{
    string str = "Pham Thanh Nhan";
    cout << "Given string is: " << str << endl;
    solution(str);
    cout << "After change, string will be " << str;
    return 0;
}