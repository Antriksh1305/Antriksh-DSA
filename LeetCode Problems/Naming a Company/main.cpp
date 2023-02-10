class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long ans = 0;
        unordered_set <string> v[26];
        
        for(int i = 0; i < size(ideas); i++){
            v[ ideas[i][0] - 'a' ].insert(ideas[i].substr(1));
        }
     
        for(int i = 0 ; i < 25; i++){
            for(int j = i + 1; j < 26; j++){
                int count = 0;
                for(const string& idea : v[i]){
                    if(v[j].count(idea)){
                        count++;
                    }
                }
                ans += 2 * (v[i].size() - count) * (v[j].size() - count);
            }
        }
        return ans;
    }
};
