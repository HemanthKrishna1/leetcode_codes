class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0;
        map<char,int> mpp;
        int res = INT_MIN;
        for(int right=0;right<n;right++){
            mpp[s[right]]++;
            while(left<=right && mpp[s[right]] > 1){
                mpp[s[left]]--;
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res == INT_MIN ? 0 : res;
    }
};