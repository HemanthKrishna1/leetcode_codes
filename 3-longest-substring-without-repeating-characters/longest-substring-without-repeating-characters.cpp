class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int left = 0;
        set<char> st;
        for(int right=0;right<s.length();right++){
            if(st.find(s[right])!=st.end()){
                while(left < right && st.find(s[right]) != st.end()){
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(s[right]);
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};