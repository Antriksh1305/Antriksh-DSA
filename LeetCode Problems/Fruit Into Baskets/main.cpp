class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        int i = 0,j = 0,res = 0;
        
        while(j < size(arr)){
            
            mp[arr[j]]++;
            
            if(mp.size() <= 2) res = max(res , j - i + 1);
            
            while(mp.size() > 2){
                mp[arr[i]]--;
                
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                
                i++;
            }
            j++;
        }
        return res;
    }
};
