class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

        int i=0,j=0;
        int start = 0, ans = INT_MAX;
        // start and ans for the satrt and end points of the substr.
        map<char,int> mpp;
        for(auto &it: t){
            mpp[it]++;
        }
        int count = mpp.size();

        for(j=0;j<n;j++){
            if(mpp.find(s[j])!=mpp.end()){
                mpp[s[j]]--;
                if(mpp[s[j]] == 0) count--;
            }

            while(count == 0){
                if(ans > j - i + 1){
                    ans = j - i + 1;
                    start = i;
                }
                if(mpp.find(s[i])!= mpp.end()){
                    if(mpp[s[i]] == 0){
                        count++;
                    }
                    mpp[s[i]]++;
                }
                i++;
            }
        }
        return ans == INT_MAX ? "" : s.substr(start, ans);
    }
};