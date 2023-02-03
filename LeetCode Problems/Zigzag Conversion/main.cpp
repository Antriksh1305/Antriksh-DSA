class Solution {
public:
    string convert(string s, int row) {
        if(row == 1) return s;
        
        string ans = "";
        int n = s.length(),div = 0;
        
        for(int i = 0; i < row and i < s.length(); i++){
            int pick1 = -1,pick2 = 0,j = 2;
            
            ans += s[i];
            while(pick1 < n){
                pick2 = i + j*(row-1);
                pick1 = pick2 - div;
                
                j+=2;
                
                if(div/2 != 0 and div/2 != row-1 and pick1 < n) ans += s[pick1];
                if(pick2 < n) ans += s[pick2];
                
                pick1 = i + j*(row-1) - div;
            }
            div += 2;
        }
        return ans;
    }
};
