class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        
        if(s.length() <= 10) return ans;
        
        unordered_map<string,int> mp;
        
        string temp;
        for(int j = 9,i = 0; j < s.length(); j++,i++){
            temp = s.substr(i,10);
            mp[temp]++;
        }
                
        for(auto i : mp){
            if(i.second > 1) ans.push_back(i.first);
        }
        return ans;
    }
};
