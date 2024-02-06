#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int column = 0, maxCount = 0;
        for (int i = 0; i < N; ++i)
        {
            int cnt = 0;
            for (int j = 0; j < N; ++j)
            {
                if (arr[j][i]==0)
                    cnt++;
            }
            if (cnt > maxCount)
            {
                maxCount = cnt;
                column = i;
            }
        }
        if (maxCount == 0)
            return -1;
        return column;
    }
};

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}