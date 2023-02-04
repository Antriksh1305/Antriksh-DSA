class Solution {
public:
    int maxCount(vector<int>& ban, int n, int maxSum) {
        sort(ban.begin(),ban.end());
        int i = 1,banindex = 0,cnt = 0,sum = 0;
        
        while(i <= n and sum < maxSum){
            if(i != ban[banindex]) sum += i;
            
            if(sum <= maxSum and i != ban[banindex]) cnt++;
            else if(sum > maxSum) return cnt;
            
            while(ban[banindex] <= i and banindex < size(ban)-1) banindex++;
            i++;
        }
        return cnt;
    }
};
