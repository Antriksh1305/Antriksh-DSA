class Solution {
public:
    unordered_map<char,int> mp;
    
    bool check_lexo(string& a, string& b){
        int i = 0;
        while(i < a.length() and i < b.length()){
            
            if(mp[a[i]] != mp[b[i]]) return mp[a[i]] < mp[b[i]];
            i++;
        }
        
        return a.length() <= b.length();
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < 26; i++)
            mp[order[i]] = i+1;
        
        for(int i = 1; i < words.size(); i++)
            if(!check_lexo( words[i-1] , words[i] )) return false;
        
        return true;
    }
};
