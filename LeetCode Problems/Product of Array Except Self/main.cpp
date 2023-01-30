class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,1);
        
        for(int i = 1; i < size(arr); i++){
            ans[i] = ans[i-1] * arr[i-1];
        }
        
        int suffprod = 1;
        for(int i = size(arr)-1; i >= 0 ;i--){
            ans[i] = ans[i]*suffprod;
            suffprod *= arr[i];
        }
        
        return ans;
    }
};
