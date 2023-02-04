class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        
        vector<int> freq(26,0);
        vector<int> window(26,0);
        
        for(int j = 0,i = 0; j < s2.length() ; j++){
                        
            if(j < n) freq[s1[j]-'a']++;
            else window[s2[i++]-'a']--;
                        
            window[s2[j]-'a']++;
            
            if(freq == window and j >= n-1) return true;
        }
        return false;
    }
};
