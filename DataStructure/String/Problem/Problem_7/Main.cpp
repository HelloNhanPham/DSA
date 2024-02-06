#include <iostream>
#include <String>
#include <vector>
using namespace std;

class Solution {
  public:
    string removeChars(string string1, string string2) {
        vector<int> frequency(26, 0);
        int len2 = string2.length();
        for (int i = 0; i < len2; ++i)
            frequency[string2[i]-'a']++;
        int first = 0, second = 0;
        int len1 = string1.length();
        while (second < len1)
        {
            if (!frequency[string1[second]-'a'])
            {
                swap(string1[first], string1[second]);
                first++;
            }
            second++;
        }
        for (int i = first; i < len1; ++i)
            string1.pop_back();
        return string1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}