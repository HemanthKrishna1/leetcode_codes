class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        
        if (n1>n2) return false;
        int i=0,j=0;
        int cnt = 0;
        while(j<n2) {
            if (t[j] ==s[i]) {
                cnt++;
                i++;
            }
            j++;
        }
        return cnt == n1;
    }
};