#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        int len = S.length();
        vector <int> frequency(26, 0);
        for (int i = 0; i < len; ++i)
            frequency[S[i]-'a']++;
        for (int i = 0; i < len; ++i)
            if (frequency[S[i]-'a']==1)
                return S[i];
        return '$';
    }

};

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}