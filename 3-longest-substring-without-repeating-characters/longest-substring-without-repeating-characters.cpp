class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = INT_MIN;
        if(s.length() == 0) return 0;
        map<char,int> mpp;
        int i=0,j=0;
        while(j<s.length()){
            mpp[s[j]]++;
            if(mpp.size() == j-i+1){
                ans=max(ans,j-i+1);
            }else if(mpp.size() < j-i+1){
                while(mpp.size() < j-i+1){
                    mpp[s[i]]--;
                    if(mpp[s[i]] ==0){
                        mpp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;

        }
        return ans;
    }
};