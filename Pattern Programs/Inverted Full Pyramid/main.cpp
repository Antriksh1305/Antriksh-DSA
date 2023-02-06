#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i = n; i > 0; i--)
    {
        int j = n - i;
        while(j--) cout<<" ";

        j = 2*i-1;
        while(j--){
            if(j % 2 == 0) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
  
return 0;
}
