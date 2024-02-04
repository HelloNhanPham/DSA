#include <iostream>
#include <String>
#include <vector>
using namespace std;

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    vector<bool> appeared(26, false);
	    int len = S.length();
	    string res = "";
	    for (int i = 0; i < len; ++i)
	        if (!appeared[S[i]-'a'])
	        {
	            appeared[S[i]-'a'] = true;
	            res.push_back(S[i]);
	        }
	    return res;
	}
};

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    vector<bool> appeared(26, false);
	    int len = S.length();
	    string res = "";
	    for (int i = 0; i < len; ++i)
	        if (!appeared[S[i]-'a'])
	        {
	            appeared[S[i]-'a'] = true;
	            res.push_back(S[i]);
	        }
	    return res;
	}
};