#include <iostream>
#include <string>
using namespace std;

void searchPattern(string text, string pattern)
{
    int len = text.length(), sublen = pattern.length();
    for (int i = 0; i <= len - sublen; ++i)
    {
        int j;
        for (j = 0; j < sublen; ++j)
            if (text[i+j]!=pattern[j])
                break;
        if (j == sublen)
            cout << i << " ";
    }
}

int main()
{
    string text = "AABAACAADAABAABA";
    string pattern = "AABA";
    cout << "Pattern found at indexes: ";
    searchPattern(text, pattern);
    return 0;
}