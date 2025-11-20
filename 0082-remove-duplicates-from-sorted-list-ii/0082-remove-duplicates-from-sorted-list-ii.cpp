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
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        ListNode* temp=head;
       unordered_map<int,int>mp;
       while(temp!=NULL){
     if (mp.find(temp->val) != mp.end()) {
    mp[temp->val]++;    
} else {
    mp[temp->val] = 1;  
}
 temp=temp->next;
       }
       temp=head;
       while(temp!=NULL&&mp[temp->val]>1){
        temp=temp->next;
       }
       head=temp;
       if(head==NULL)return NULL;
       ListNode* prev=temp;
       while(temp!=NULL){
        if(mp[temp->val]>1){
            while(temp!=NULL&&mp[temp->val]>1){
temp=temp->next; }
prev->next=temp;
         }
         prev=temp;
         if(temp==NULL)return head;
         temp=temp->next;
       }
return head;
    }
};