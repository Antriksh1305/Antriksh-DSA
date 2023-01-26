class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        if(p.length() > s.length()) return ans;
        
        vector<int> P(26,0);
        vector<int> S(26,0);
        
        for(int i = 0 ; i < p.length(); i++){
            P[p[i]-97]++;
            S[s[i]-97]++;
        }
        
        if(P == S) ans.push_back(0);
        
        for(int i = p.length(); i < s.length(); i++){
            S[ s[i - p.length() ] -97]--;
            S[s[i] - 97]++;
            
            if(P == S) ans.push_back(i - p.length() + 1);
        }
        return ans;
    }
};
