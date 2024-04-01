class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for(int i=s.length()-1;i>=0;i--){
            while(s[i] == ' '){
                i--;
            }
            while(i>=0 && s[i]!=' '){
                cnt++;
                i--;
            }
            break;
        }
        return cnt;
    }
};