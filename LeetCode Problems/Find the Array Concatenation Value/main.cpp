class Solution {
public:
    long long findTheArrayConcVal(vector<int>& arr) {
        long long ans = 0;
        int i = 0, j = size(arr)-1;
        
        while(i <= j){
            int len = size(to_string(arr[j]));
            if(i != j){
                ans += (arr[i] * pow(10,len) + arr[j]);
            }
            else{
                ans += arr[i];
            }
            i++;
            j--;
        }
        return ans;
    }
};
