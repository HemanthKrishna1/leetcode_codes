/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans1 = new ListNode(0);
        ListNode* head = ans1;
        string n1 = "", n2="";
        while(l1){
            n1+=to_string(l1->val);
            l1=l1->next;
        }
        while(l2){
            n2+=to_string(l2->val);
            l2=l2->next;
        }
        cout << "n1 " << n1 << endl;
        cout << "n2 " << n2 << endl;
        
        int nn1 = n1.length()-1;
        int nn2 = n2.length()-1;
        int carry = 0;
        string ans = "";
        while(nn1>=0 && nn2>=0){
            int sum = carry + n1[nn1]-'0' + n2[nn2]-'0';
            ans+=to_string(sum%10);
            carry = sum/10;
            nn1--;
            nn2--;
        }
        while(nn1 >=0){
            int sum = carry + n1[nn1]-'0';
            ans+=to_string(sum%10);
            carry = sum/10;
            nn1--;
        }
        while(nn2 >=0){
            int sum = carry + n2[nn2]-'0';
            ans+=to_string(sum%10);
            carry = sum/10;
            nn2--;
        }
        if(carry){
            ans+=to_string(carry);
        }
        cout << "ans " << ans << endl;
        reverse(ans.begin(), ans.end());
        for(int i=0;i<ans.length();i++){
            ans1->next = new ListNode(ans[i]-'0');
            ans1= ans1->next;
        }
        return head->next;
    }
};