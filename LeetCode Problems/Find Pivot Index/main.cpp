class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int suffix = 0,prefix = 0;
        
        for(int i = 0; i < size(arr); i++) suffix += arr[i];
        
        for(int i = 0; i < size(arr); i++){
            
            suffix -= arr[i];
            if(i > 0) prefix += arr[i-1];
            
            if(prefix == suffix) return i;
        }
        return -1;
    }
};
