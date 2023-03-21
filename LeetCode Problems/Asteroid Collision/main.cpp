class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        
        int i = 0;
        while(i < size(arr)){
            if( st.empty() or (arr[i] == abs(arr[i]) and st.top() != abs(st.top())) ) st.push(arr[i++]);      //when st.top -ve and arr[i] +ve
            else if( st.top() == abs(st.top()) and arr[i] != abs(arr[i]) ){                                   //st.top +ve and arr[i] -ve
                if( st.top() <= abs(arr[i]) ){
                    if( st.top() == abs(arr[i])){
                        i++;
                    }
                    st.pop();
                }
                else i++;
            }
            else st.push(arr[i++]);      //when both have same sign
        }
        
        //storing the stack content into vector
        vector<int> ans(st.size());
        i = st.size()-1;
        
        while(!st.empty()){
            ans[i--] = st.top();
            st.pop();
        }
        return ans;
    }
};
