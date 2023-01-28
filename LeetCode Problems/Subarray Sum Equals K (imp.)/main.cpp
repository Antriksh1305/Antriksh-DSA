class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
    
        int cnt = 0;
        int sum = 0;
        mp[sum]++;
        
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(mp[sum-k] > 0){
                cnt += mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
