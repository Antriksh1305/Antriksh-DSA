#include<bits/stdc++.h>

using namespace std;

vector<string>::iterator it;

void subsets(vector<string>& ans,string s,string output,int i){
    if(i == s.length()){
        //We can also create a map and store all the subsets and then traverse the map to get the unique elements.
        //Map method will provide us with a better time complexity
        it = find(ans.begin(),ans.end(),output);
        if(it == ans.end())
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