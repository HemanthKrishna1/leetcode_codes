class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mpp;
        for(string s :strs) {
            vector<int> arr(26);
            for(char c : s) {
                arr[c - 'a']++;
            }
            mpp[arr].push_back(s);
        }
        for(auto it: mpp) ans.push_back(it.second);
        return ans;
    }
};