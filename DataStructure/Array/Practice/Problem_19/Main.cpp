#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    vector<long long> res;
	    unordered_set<long long> s;
	    for (int i = 0; i < M; ++i)
	        s.insert(B[i]);
	    for (int i = 0; i < N; ++i)
	        if (s.count(A[i])==0)
	            res.push_back(A[i]);
	    return res;
	} 
};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[1000];
        long long b[1000];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}