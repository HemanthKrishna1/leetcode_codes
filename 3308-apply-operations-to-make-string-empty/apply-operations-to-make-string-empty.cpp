class Solution {
public:
    string lastNonEmptyString(string s) {
        string ans = "";
        map<char,int> mpp;
        for(auto &it: s){
            mpp[it]++;
        }
        int lowest = INT_MIN;
        for(auto it:mpp){
            lowest = max(lowest, it.second);
        }
        
        set<char> st;
        for(auto it: mpp){
            if(it.second == lowest){
                st.insert(it.first);
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(st.count(s[i])!=0){
                ans+=s[i];
                st.erase(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};