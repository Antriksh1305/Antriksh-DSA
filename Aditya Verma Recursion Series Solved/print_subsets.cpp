#include<bits/stdc++.h>

using namespace std;

void subsets(vector<string>& ans,string s,string output,int i){
    if(i == s.length()){
        ans.push_back(output);
        return;
    }
    subsets(ans,s,output,i+1);
    output.push_back(s[i]);
    subsets(ans,s,output,i+1);
    return;
}

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    subsets(ans,s,"",0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
return 0;
}