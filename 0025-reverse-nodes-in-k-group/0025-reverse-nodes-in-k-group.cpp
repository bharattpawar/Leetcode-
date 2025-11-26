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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* frist=new ListNode(0);
        frist->next=head;
        head=frist;int x;
         ListNode* second;
                  ListNode* prev;
         ListNode* curr;
         ListNode* front;

        while(frist->next!=NULL){
            x=k;
second=frist->next;
prev=frist;
curr=frist->next;
 int check=x;ListNode* checkk=curr;

 while(checkk!=NULL&&check){
checkk=checkk->next;
check--;
 }if(check>0){break;}
        while(x&&curr){
front=curr->next;
curr->next=prev;
prev=curr;
curr=front;
x--;
     }
     frist->next=prev;
     second->next=curr;
     frist=second;
    }
    frist=head;
    head=head->next;
    delete frist;
    return head;}
};