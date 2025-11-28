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
    ListNode* rotateRight(ListNode* head, int k) {
     ListNode* temp=head;int n=0;
     if(k==0)return head;
      if(head==NULL)return head;
     if(head->next==NULL)return head;

      ListNode* prev=head;
     while(temp!=NULL){
n++;
prev=temp;
temp=temp->next;
     }          if(k%n==0)return head;

      k=k%n;
       if(k==n)return head;

     int find=n-k;
     temp=head;
     find--;
while(find){
    temp=temp->next;
    find--;
}
ListNode* new_head=temp->next;
temp->next=NULL;
prev->next=head;
head=new_head;
return head;
    }
};