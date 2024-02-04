// Using simple Iteration
#include <iostream>
#include <string>
using namespace std;

int countOccurrence(string str, char c)
{
    int count = 0;
    int len = str.length();
    for (int i = 0; i < len; ++i)
        if (c == str[i])
            count++;
    return count;
}

int main()
{
    string str = "cpluspluslearnwithcplusplus";
    char c = 'c';
    cout << "Occurrences of c is: " << countOccurrence(str, c);
    return 0;
}