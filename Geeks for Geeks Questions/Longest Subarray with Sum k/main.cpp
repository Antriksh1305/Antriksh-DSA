//{ Driver Code Starts
#include <bits/stdc++.h>

//GFG Question of finding the Longest Subarray with sum k
/*
Approach: Using prefix Sum

(Approach Source is GFG)
Initialize sum = 0 and maxLen = 0.
Create a hash table having (sum, index).
For i = 0 to n-1, perform the following steps:
Add arr[i] to sum.
If sum == k, update maxLen = i+1.
Check whether sum is present in the hash table or not. If not present, then add it to the hash table as (sum, i) pair.
Check if (sum-k) is present in the hash table or not. If present, then obtain index of (sum-k) from the hash table as index. Now check if maxLen < (i-index), then update maxLen = (i-index).
Return maxLen.
*/

using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        unordered_map<int,int> v;
        
        int max = 0;
        int sum = 0;
        int ind = 0;
        v[sum] = 1;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(v[sum-k] > 0){
                ind = (i+2) - v[sum-k];
            }
            
            if(ind > max){
                max = ind;
            }
            
            ind = 0;
            if(v[sum] == 0)
                v[sum] = i+2;
        }
        
        return max;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
