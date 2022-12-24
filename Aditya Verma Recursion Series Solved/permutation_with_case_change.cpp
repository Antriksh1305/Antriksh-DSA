#include<bits/stdc++.h>

using namespace std;

void solve(vector<string>& ans , string s , int i){
    if(i == s.length()){
        ans.push_back(s);
        return;
    }
    
    solve(ans,s,i+1);
    s[i] = char(s[i]-32);
    solve(ans,s,i+1);
    return;
}

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    solve(ans,s,0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<",";
    }cout<<"\b "<<endl;
return 0;
}