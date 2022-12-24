#include<bits/stdc++.h>
/*Geeks for geeks Question*/
//Given a positive integer N
//the task is to find all the N bit binary numbers
//having more than or equal 1’s than 0’s for any prefix of the number.

using namespace std;

class Solution{
public:	
    void solve(vector<string>& ans, string output, int n, int one, int zero){
        if(one+zero==n){
            ans.push_back(output);
            return;
        }
        string op1 = output;
        op1.push_back('1');
        solve(ans,op1,n,one+1,zero);
        if(one>zero){
            string op2 = output;
            op2.push_back('0');
            solve(ans,op2,n,one,zero+1);
        }
        return;
    }
	vector<string> NBitBinary(int n)
	{
        vector<string> ans;
        solve(ans,"",n,0,0);
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
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}