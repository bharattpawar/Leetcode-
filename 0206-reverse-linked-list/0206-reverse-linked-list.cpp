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
void reverseit(ListNode* &temp,ListNode* &head,ListNode* &temp2){
    if(head->next==NULL)return;
     temp=head->next;
        head->next=temp2;
            temp2=head;
            head=temp;
            reverseit(temp,head,temp2);
}        

    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
                if(head->next==NULL)return head;

        ListNode *temp=head->next;
        head->next=NULL;
                ListNode *temp2=head;
head=temp;
reverseit(head,temp,temp2);
 
head->next=temp2;return head;
    }
};