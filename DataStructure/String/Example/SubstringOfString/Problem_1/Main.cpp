#include <string>
#include <iostream>
using namespace std;

string getSubString(string str, int pos, int len)
{
    string ans = "";
    for (int i = pos; i < pos + len; ++i)
        ans.push_back(str[i]);
    return ans;
}

int main()
{
    string str = "Pham Thanh Nhan";
    cout << "The full string is: " << str << endl;
    cout << "One of substring of the given string is: " << getSubString(str, 5, 10);
    return 0;
}