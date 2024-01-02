class Solution {
public:

    bool isMatching(string st, string pattern){
        int cnt = 0;
        for(auto it: st){
            if(it>='A' && it<='Z' && it!=pattern[cnt]) return false;
            if(it == pattern[cnt]) cnt++;
        }
        return cnt == pattern.size();
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for(auto it: queries){
            if(isMatching(it, pattern)) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};