// Using frequency table.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> frequency(26, 0);

void makeFrequencyTable(string str)
{
    int len = str.length();
    for (int i = 0; i < len; ++i)
        frequency[str[i]-'a']++;
}

int main()
{
    string str = "cpluspluslearnwithcplusplus";
    char c = 'c';
    makeFrequencyTable(str);
    cout << "Occurrences of c is: " << frequency.at(c-'a');
    return 0;
}