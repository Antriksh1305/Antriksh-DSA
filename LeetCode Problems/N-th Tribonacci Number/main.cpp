//Time Complexity O(N) and Space Complexity O(1)
class Solution {
public:
    int tribonacci(int n) {
        vector<int> arr(3,1);
        arr[0]--;
        
        for(int i = 3; i <= n; i++){
            int x = arr[i-1] + arr[i-2] + arr[i-3];
            arr.push_back(x);
        }
        
        return arr[n];
    }
};

/*
//DP Solution in Time Complexity O(N^2) and Space Complexity O(1*38) = O(1)
class Solution {
private:
    vector<int> dp;
public:
    Solution() : dp(38) {}
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1 or n == 2){
            return 1;
        }
        
        if(dp[n] == 0)
            dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        else
            return dp[n];
        
        return dp[n];
    }
};
*/
