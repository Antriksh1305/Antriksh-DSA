class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) { 
        
        int prefsum = 0;
        unordered_map<int,int> mp = {{0,-1}};
        
        for(int i = 0; i < size(arr); i++){
            prefsum += arr[i];
            prefsum = prefsum % k;
                        
            if(mp.find(prefsum) != mp.end()){
                if(i - mp[prefsum] > 1) return true;
            }
            else mp[prefsum] = i; 
        }
        return false;
    }
};
