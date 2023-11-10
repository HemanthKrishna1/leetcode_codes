class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();
        int cnt = 1;
        int ans = 1;
        int m = 1e9+7;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]) cnt++;
            else cnt = 1;
            ans = (ans + cnt)%m;
        }
        return ans;
    }
};