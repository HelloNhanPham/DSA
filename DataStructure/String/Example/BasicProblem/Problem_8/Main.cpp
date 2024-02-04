#include <iostream>
#include <String>
using namespace std;
#include <vector>

int hashFunction(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a';
    return c - 'A' + 26;
}

class Solution{
public:
	string removeDuplicates(string str) {
	    vector<int> f(52, 0);
	    string ans = "";
	    int len = str.length();
	    for (int i = 0; i < len; ++i)
	    {
	        if (f[hashFunction(str[i])]==0)
	        {
	            f[hashFunction(str[i])]++;
	            ans.push_back(str[i]);
	        }
	    }
	    return ans;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}