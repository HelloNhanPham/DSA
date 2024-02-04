#include <iostream>
#include <string>
#include <vector>
using namespace std;
string printSequence(string input);

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

string printSequence(string S)
{
    vector<string> v(26);
    v[0] = "2";
    v[1] = "22";
    v[2] = "222";
    v[3] = "3";
    v[4] = "33";
    v[5] = "333";
    v[6] = "4";
    v[7] = "44";
    v[8] = "444";
    v[9] = "5";
    v[10] = "55";
    v[11] = "555";
    v[12] = "6";
    v[13] = "66";
    v[14] = "666";
    v[15] = "7";
    v[16] = "77";
    v[17] = "777";
    v[18] = "7777";
    v[19] = "8";
    v[20] = "88";
    v[21] = "888";
    v[22] = "9";
    v[23] = "99";
    v[24] = "999";
    v[25] = "9999";
    string res = "";
    int len = S.length();
    for (int i = 0; i < len; ++i)
    {
        if (S[i]==' ')
            res += "0";
        else
            res += v[S[i]-'A'];
    }
    return res;
}