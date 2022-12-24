#include<bits/stdc++.h>
//reversing the stack with less time complexity that done in the delete_middle_element_in_a_stack.
using namespace std;

void reverse(stack<int>& s,int temp){
    if(s.size() == 0){
        s.push(temp);
        return;
    }
    int x = s.top();
    s.pop();
    reverse(s,temp);
    s.push(x);
    return;
}

void solve(stack<int>& s){
    if(s.size()==0){
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s);
    reverse(s,temp);
    return;
}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    solve(s);
    for (int i = 0; i < n; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}