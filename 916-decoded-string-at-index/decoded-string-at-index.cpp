class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;
        for(char ch : s){
            if(isdigit(ch)){
                int digit = ch - '0';
                size*=digit;
            }else{
                size++;
            }
        }

        for(int i=s.size()-1;i>=0;i--){
            char ch = s[i];
            if(isdigit(ch)){
                int digit = ch - '0';
                size/=digit;
                k %= size;
            }else{
                if(k==0 || k== size){
                    return string(1,ch);
                }
                size--;
            }
        }
        return "";
    }
};