class Solution {
public:
    int jump(vector<int>& arr) {
        if(size(arr) == 1) return 0;
        int jumps = 0;
        int i = 0,j = 0;
        int n = size(arr);
        
        while(i < n){
            
            int max = 0;
            int cnt = arr[j];
            
            if(i == n-1) return jumps;
            else if(i + arr[i] >= n-1) return jumps+1;

            while(cnt--){
                i++;
                if(max < i + arr[i] and arr[i] != 0){
                    j = i;
                    max = i + arr[i];
                }
            }
            i = j;
            jumps++;
        }
        return jumps;
    }
};
