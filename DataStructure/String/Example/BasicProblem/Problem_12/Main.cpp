#include <iostream>
#include <string>
using namespace std;

class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    string ans = "";
	    int len = S.length();
	    for (int i = 0; i < len; ++i)
	    {
	        if (count == 0)
	            ans.push_back(S[i]);
	        else if (S[i] == ch)
	            count--;
	    }
	    if (ans.length()==0)
	        return "Empty string";
	    return ans;
	}
};

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}