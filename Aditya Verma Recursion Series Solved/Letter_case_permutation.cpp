#include<bits/stdc++.h>

using namespace std;

void lettercase(vector<string>& ans, string s, int i){
    while(s[i] >= '0' and s[i] <= '9'){
        i++;
    }

    if(i == s.length()){
        ans.push_back(s);
        return;
    }
    
    s[i] = tolower(s[i]);
    lettercase(ans,s,i+1);
    s[i] = toupper(s[i]);
    lettercase(ans,s,i+1);
    return;
}

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    lettercase(ans,s,0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    cout<<ans.size()<<endl;
return 0;
}