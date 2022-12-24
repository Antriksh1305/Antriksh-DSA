#include<bits/stdc++.h>

using namespace std;

void permutation(vector<string>& ans , string s , string output , int i){
    if(i == s.length()-1){
        output.push_back(s[s.length()-1]);
        ans.push_back(output);
        return;
    }

    output.push_back(s[i]);
    permutation(ans,s,output,i+1);
    output.push_back(' ');
    permutation(ans,s,output,i+1);
}

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    permutation(ans,s,"",0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<",";
    }cout<<"\b "<<endl;
return 0;
}