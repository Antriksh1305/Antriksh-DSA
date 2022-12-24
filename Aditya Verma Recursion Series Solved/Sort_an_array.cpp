#include<bits/stdc++.h>
//Sorted in Ascending Order
using namespace std;

void insert(vector<int>& arr,int last){
    if(arr.size()==0 or arr[arr.size()-1] <= last){
        arr.push_back(last);
        return;
    }

    int x = arr[arr.size()-1];
    arr.pop_back();
    insert(arr,last);
    arr.push_back(x);

    return;
}
void sort(vector<int>& arr){
    int n = arr.size();
    if(n<=1){
        return;
    }
    int last = arr[n-1];
    arr.pop_back();

    sort(arr);

    insert(arr,last);

    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}