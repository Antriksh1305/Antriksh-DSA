//Sliding Window Approach TC: O(N) and SC: O(1)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = -1;
        int sum = 0;
        int min = INT_MAX;
        
        while(i < n and j < n){
            if(sum >= target){
                if(min > j -  i + 1)
                    min = j - i + 1;
                
                sum -= arr[i++];
            }
            else if(sum < target){
                j++;
                if(j < arr.size())
                    sum += arr[j];
            }
        }
        if(min == INT_MAX) min = 0;
        return min;
    }
};
