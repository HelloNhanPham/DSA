#include <iostream>
#include <string>
using namespace std;

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    int len = S.length();
	    if (len == 0)
	        return "";
	    string ans = "";
	    ans.push_back(S[0]);
	    for (int i = 1; i < len; ++i)
	    {
	        if (S[i] == ' ')
	            ans.push_back(S[i+1]);
	    }
	    return ans;
	}
};

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
}