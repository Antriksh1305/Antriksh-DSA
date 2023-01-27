class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        vector<int> ans;
        deque<int> q;
        
        for(int i = 0;  i < arr.size(); i++){
            while(!q.empty() and arr[q.back()] < arr[i]){
                q.pop_back();
            }
            q.push_back(i);
            
            while(q.front() < i-k+1 and !q.empty())
                q.pop_front();
            
            if(i >= k-1)
                ans.push_back(arr[q.front()]);
        }
        return ans;
    }
};
