class Solution {
public:
    bool halvesAreAlike(string s) {
        set<int> st = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.length();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(st.count(s[i])!=0 && i<(n/2)){
                cnt++;
            }
            if (st.count(s[i])!=0 && i>=(n/2)){
                cnt--;
            }
        }
        return cnt==0;
    }
};