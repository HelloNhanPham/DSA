#include<iostream>
#include <string>
using namespace std;
 
int main()
{
    string str = "geeksforgeeks";
    char c = 'e';
    cout << count(str.begin(), str.end(), c);
    return 0;
}