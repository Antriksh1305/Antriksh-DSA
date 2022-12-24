#include<bits/stdc++.h>

using namespace std;
#define test int t;cin>>t;while(t--)

//without returning anything

// void solve(int n){
//     if(n==0)
//         return;
    
//     solve(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     solve(n);
// return 0;
// }

//doing with a return functions
int solve(int n){
    if(n==1)
        return n;
    
    cout<<solve(n-1)<<endl;
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}