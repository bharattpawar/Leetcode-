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
        ListNode* temp1=l1;
        ListNode* temp2=l2;int carry=0;
        int reminder=0;int sum=0;
         ListNode* dummy = new ListNode(0); 
    ListNode* tail = dummy;    
        while(temp1!=NULL&&temp2!=NULL){
sum=temp1->val+temp2->val+carry;
carry=sum/10;
reminder=sum%10;
tail->next=new ListNode(reminder);
tail=tail->next; 
temp1=temp1->next;
temp2=temp2->next;
        }
        while(temp1!=NULL){
            sum=temp1->val+carry;
carry=sum/10;
reminder=sum%10;
tail->next=new ListNode(reminder);
tail=tail->next;
temp1=temp1->next;
        }
         while(temp2!=NULL){
             sum=temp2->val+carry;
carry=sum/10;
reminder=sum%10;
tail->next=new ListNode(reminder);
tail=tail->next;
temp2=temp2->next;
        }
        if(carry){
            tail->next=new ListNode(carry);
tail=tail->next;

        }
return dummy->next;
    }
};