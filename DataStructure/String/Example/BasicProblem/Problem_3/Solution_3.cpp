#include <string>
#include <iostream>
using namespace std;

int countOccurrence(string str, char c, int index)
{
    if (index == -1)
        return 0;
    if (str[index]==c)
        return 1 + countOccurrence(str, c, index-1);
    return countOccurrence(str, c, index-1);
}

int main()
{
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout << "Given string is: " << str << endl;
    char c = 'a';
    cout << "Occurrences of " << c << " is: " << countOccurrence(str, c, str.length()-1);
    return 0;
}