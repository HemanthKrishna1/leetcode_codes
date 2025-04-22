class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int cnt = 0;
        string a = "";
        for(int i=0;i<s.length();i++){
            cnt++;
            a+=s[i];
            if(cnt  == k){
                ans.push_back(a);
                a = "";
                cnt = 0;
            }
        }
        cout << a << cnt << k << endl;
        if (a != ""){
            // a = j 
            int len = a.length();  // 1
            for(int i=0;i<k-len;i++){ // k-len = 3-1 = 2
                a+=fill;

            }
            ans.push_back(a);
            return ans;
        }
        return ans;
    }
};