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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        if(head->next==NULL)return NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int i=size-n;
        temp=head;
        while(i>1){
temp=temp->next;
i--;
        }
        if(i==0){
            head=head->next;
            return head;
        }
        if(temp->next!=NULL&&temp->next->next==NULL){
            temp->next=NULL;}
        else if(temp->next!=NULL){
temp->next=temp->next->next;
        }
        return head;
    }
};