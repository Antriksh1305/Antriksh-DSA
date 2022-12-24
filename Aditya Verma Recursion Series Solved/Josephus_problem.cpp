/*Given the total number of persons n and a number k which indicates that k-1 persons are skipped and 
kth person is killed in circle in a fixed direction.
After each operation, the count will start from k+1th person. 
The task is to choose the safe place in the circle so that when you perform these operations 
starting from 1st place in the circle, you are the last one remaining and survive.*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    void solve(vector<int>& v,int& ans,int index,int n, int k){
        if(n==1){
            ans = v[0];
            return;
        }

        index = (index+k-1)%v.size();
        v.erase(v.begin()+index);

        solve(v,ans,index,n-1,k);

        return;
    }

    int josephus(int n, int k)
    {
        //try with circular linked list for a better time complexity.
        vector<int> v;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i+1);
        }

        solve(v,ans,0,n,k);
        return ans;
    }
};

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}