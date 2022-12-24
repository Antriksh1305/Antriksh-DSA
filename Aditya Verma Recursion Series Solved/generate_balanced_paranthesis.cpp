#include<bits/stdc++.h>

using namespace std;

void solve(vector<string>& ans, string output, int n1,int n2){
    if(n1==0 and n2==0){
        ans.push_back(output);
        return;
    }
    if(n1!=0){
        string op1 = output;
        op1.push_back('(');
        solve(ans,op1,n1-1,n2);
    }
    if(n1<n2){
        // cout<<"reached"<<endl;
        string op1 = output;
        op1.push_back(')');
        solve(ans,op1,n1,n2-1);
    }
    return;
}

vector<string> generateparanthesis(int n){
    vector<string> ans;
    solve(ans,"",n,n);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans;
    ans = generateparanthesis(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<",";
    }cout<<"\b "<<endl;
    cout<<ans.size()<<endl;
return 0;
}