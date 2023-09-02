/* Pattern Approach */
/* TC-> O(N) and SC-> O(1) */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans (1,0);
        
        int i = 0, size;
        while(i < n){
            int j = 0;
            size = ans.size();
            
            while(j < size and i < n){
                ans.push_back(ans[j]+1);
                j++;
                i++;
            }
        }
        
        return ans;
    }
};
