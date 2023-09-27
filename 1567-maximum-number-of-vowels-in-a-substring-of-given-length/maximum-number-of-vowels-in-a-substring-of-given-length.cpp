class Solution {
public:
    bool is_vowel(char ch) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int cnt = 0;
        int ans = INT_MIN;

        for(int i=0;i<n;i++) {
            if(i<k) {
                if(is_vowel(s[i])) cnt++;
            }else {
                ans = max(ans, cnt);
                if(is_vowel(s[i])) cnt++;
                if(is_vowel(s[i-k])) cnt--;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};