class Solution {
public:
    vector<int> separateDigits(vector<int>& arr) {
        
        vector<int> ans;
        for(int i = size(arr) - 1; i >= 0 ; i--){
            int x = arr[i];
            while(x > 0){
                ans.push_back(x % 10);
                x = (x - x % 10) / 10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
