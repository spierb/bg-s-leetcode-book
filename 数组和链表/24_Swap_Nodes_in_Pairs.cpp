/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // if(head == NULL || head->next == NULL) return head;
        // ListNode* rehead = head->next;
        // head->next = swapPairs(rehead->next);
        // rehead->next = head;
        // return rehead;
        ListNode* pre = head;
        ListNode* cur = head;
        ListNode* nxt = head->next;
        while(cur->next)
        {
            pre->next = 
            pre = cur;
            cur->next = nxt->next;
            nxt->next = cur;
            cur = cur->next;
        }
        return nxt;

    }
};