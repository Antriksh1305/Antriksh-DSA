class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]*10000 + nums[i+n];
        }
        
        int pick = n-1;
        int i = 2 * n - 1;
        while(i > 0){
            nums[i] = nums[pick] % 10000;
            nums[i-1] = (nums[pick] - nums[i])/10000;
            pick--;
            i = i - 2;
        }
        
        return nums;
    }
};
