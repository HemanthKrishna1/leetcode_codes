class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int n1 = s.length();
        int n2 = t.length();
        for(int i=0;i<n1;i++){
            arr[s[i] - 'a']++;
        }
        for(int i=0;i<n2;i++){
            arr[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++) {
            if(arr[i] != 0) {
                return false;
            }
        }
        return true;
    }
};