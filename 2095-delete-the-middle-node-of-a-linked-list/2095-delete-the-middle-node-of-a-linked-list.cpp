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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
          if(head->next->next==NULL){
            head->next=NULL;return head;
        }
        ListNode *temp=head;int total=0;
        while(temp!=NULL){
total++;
temp=temp->next;
        }
        temp=head;total=total/2;
        while(total>1){
temp=temp->next;total--;
        }
        if(temp->next->next!=NULL){
            temp->next=temp->next->next;
        }
        return head;
    }
};