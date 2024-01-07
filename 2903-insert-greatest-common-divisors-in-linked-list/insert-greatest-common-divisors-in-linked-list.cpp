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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int gcd = 1;
        ListNode* ans = new ListNode(-1);
        ListNode* ans2 = ans;
        ListNode* temp = head;
        while(temp->next){
            gcd = __gcd(temp->val, temp->next->val);
            ans->next = new ListNode(temp->val);
            ans->next->next = new ListNode(gcd);
            ans=ans->next->next;
            temp=temp->next;
        }
        ans->next = new ListNode(temp->val);
        return ans2->next;
    }
};