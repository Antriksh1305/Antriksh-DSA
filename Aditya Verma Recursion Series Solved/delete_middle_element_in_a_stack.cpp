#include<bits/stdc++.h>
//deleting the middle element from bottom of a stack.....defining middle element position = (size/2) + 1
using namespace std;

//reversing the stack with more space complexity
void reverse(stack<int>& s,stack<int>& temp){
    if(s.size()==0){
        return;
    }
    int x = s.top();
    s.pop();
    temp.push(x);
    reverse(s,temp);
}

void delmid(stack<int>& s,int mid){
    if(s.size()== 0 or mid==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    delmid(s,mid-1);
    s.push(temp);
    return;
}

int main(){
    stack <int> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    int mid = (s.size()/2 + 1);
    if(s.size()%2==0) mid--;
    
    delmid(s,mid);
    stack<int> ans;
    reverse(s,ans);
    for (int i = 0; i < n-1; i++)
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
    
return 0;
}