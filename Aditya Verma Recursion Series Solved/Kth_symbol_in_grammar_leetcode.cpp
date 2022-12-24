#include<bits/stdc++.h>

using namespace std;

string solve(string ans,string output,int n){
    if(n==1){
        return ans;
    }

    for(int i = 0; i < ans.length(); i++){
        if(ans[i]=='0'){
            output += "01";
        }
        else{
            output += "10";
        }
    }
    cout<<output<<endl;
    return solve(output,"",n-1);
}

int KthGrammar(int n, int k){
    string temp = solve("0","",n);
    return temp[k-1]-48;
}

int main(){
    int n,k;
    cin>>n>>k;
    int ans = KthGrammar(n,k);
    cout<<ans<<endl;
return 0;
}