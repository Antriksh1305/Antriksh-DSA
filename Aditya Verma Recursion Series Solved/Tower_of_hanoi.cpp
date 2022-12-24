#include<bits/stdc++.h>

using namespace std;

void solve(int s,int h,int d,int n,int& cnt){
    cnt++;
    if(n==1){
        cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,d,h,n-1,cnt);
    cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,s,d,n-1,cnt);
    return;
}

int main(){
    int n;
    cin>>n;
    int s = 1,h = 2,d = 3;
    int cnt = 0;
    solve(s,h,d,n,cnt);
    cout<<cnt<<endl;
return 0;
}