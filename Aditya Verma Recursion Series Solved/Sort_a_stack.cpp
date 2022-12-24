#include<bits/stdc++.h>
//sorted in descending order
using namespace std;

void insert(stack<int>& s,int temp){
    if(s.size()==0 or s.top()>=temp){
        s.push(temp);
        return;
    }
    int x = s.top();
    s.pop();
    insert(s,temp);
    s.push(x);
    return;
}
void sort(stack<int>& s){
    if(s.size()<=1){
        return;
    }

    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
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
    sort(s);
    for (int i = 0; i < n; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
return 0;
}