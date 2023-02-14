class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.length()-1;
        int j = b.length()-1;
        int x,y,sum = 0,cnt = 0;
        
        while(i >= 0 or j >= 0){
            
            if(i >= 0) x = a[i--] - 48;
            else x = 0;
            
            if(j >= 0) y = b[j--] - 48;
            else y = 0;
            
            sum = x + y + cnt;
            
            if(sum == 1 or sum == 3){
                if(sum == 1) cnt = 0;
                ans = '1' + ans;
            }
            else{
                ans = '0' + ans;
                if(sum == 2) cnt = 1;
            }
        }
        if(cnt) ans = '1' + ans;
        
        return ans;
    }
};
