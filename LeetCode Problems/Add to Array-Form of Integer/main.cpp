class Solution {
public:
    vector<int> addToArrayForm(vector<int>& arr, int k) {
        
        for(int i=arr.size()-1;i>=0;i--){
            arr[i] += k;        // adding the number
            k = arr[i]/10;      // updating the k, carry is managed automatically because of the previous step
            arr[i] %= 10;       // ranging the element in range 1 to 9
        }
        while(k > 0){
            arr.insert(arr.begin(), k % 10);
            k /= 10;
        }
        return arr;
    }
};
