#include<bits/stdc++.h>

/*
GFG Question:  The Celebrity Problem (important)
Time Complexity: O(N)
Space Complexity: O(N)
*/
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int k = 0;
        while(k < n){
            int j = k;
            int flag = 1;
            for(int i = 0; i < n; i++){
                
                if(i < k){
                    if(M[i][j] == 1 and M[j][i] == 0) flag = 1;
                    else{
                        flag = 0;
                        break;
                    }
                }
                else if(i > k){
                    if(M[i][j] == 1 and M[j][i] == 0) flag = 1;
                    else{
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 1) return k;
            k++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
// } Driver Code Ends
