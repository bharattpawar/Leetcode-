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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* nextt=head;
while(nextt!=NULL){
    while(nextt!=NULL&&nextt->val==curr->val){
        nextt=nextt->next;
    }
    curr->next=nextt;
    curr=nextt;
}
return head;
    }
};