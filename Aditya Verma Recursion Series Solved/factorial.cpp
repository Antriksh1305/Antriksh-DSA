#include<bits/stdc++.h>

using namespace std;
#define test int t;cin>>t;while(t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

long long solve(long long n){
    if(n==0 || n==1){
        return 1;
    }

    return n*solve(n-1);
}
int main(){
    long long n;
    cin>>n;
    // time_t start,end;

    // time(&start);

    // ios_base::sync_with_stdio(false);

    cout<<solve(n)<<endl;

    // time(&end);

    // double time_taken = double(end-start);
    // cout<<"Time taken ny program is:"<<fixed<<time_taken<<setprecision(15);
    // cout<<" sec"<<endl;

return 0;
}