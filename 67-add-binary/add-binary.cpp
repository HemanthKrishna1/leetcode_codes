class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length(), n2 = b.length(), i=n1-1, j=n2-1;
        int carry = 0;
        string ans = "";
        while(i>=0 && j>=0){
            int sum = ((a[i]-'0') + (b[j]-'0') + carry)%2;
            carry = ((a[i]-'0') + (b[j]-'0') + carry)/2;
            ans+=to_string(sum);
            i--;
            j--;
        }

        while(i>=0) {
            int sum = ((a[i]-'0') + carry)%2;
            carry = ((a[i]-'0') + carry)/2;
            ans+=to_string(sum);
            i--;
        }

        while(j>=0){
            int sum = ((b[j]-'0') + carry)%2;
            carry = ((b[j]-'0') + carry)/2;
            ans+=to_string(sum);
            j--;
        }
        if(carry) {
            ans+=to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};