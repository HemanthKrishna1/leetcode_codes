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
        ListNode* temp = head;
        while(temp->next){
            ListNode* nextl = temp->next;
            ListNode* ll = new ListNode(__gcd(temp->val, nextl->val));
            temp->next = ll;
            ll->next = nextl;
            temp = nextl;
        }
        return head;
    }
};