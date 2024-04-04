class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                cnt++;
                res = max(res, cnt);
            }
            if(s[i] == ')'){
                cnt--;
            }
        }
        return res;
    }
};