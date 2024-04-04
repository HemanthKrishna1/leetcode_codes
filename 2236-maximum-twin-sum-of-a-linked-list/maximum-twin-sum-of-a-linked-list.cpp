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
    
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while(slow){
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        int ans = INT_MIN;

        while(prev!=nullptr){
            ans=max(ans, head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }
        return ans;
    }
};