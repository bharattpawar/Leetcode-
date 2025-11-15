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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
            set<pair<int,ListNode*>> s;
            ListNode* temp=head;
            while(temp!=NULL){
                    s.insert({temp->val, temp});
                    temp=temp->next;

            }
           
head = (*s.begin()).second;
            while(!s.empty()) {
   auto top = *s.begin();
   s.erase(s.begin());  
   if(s.empty()){
    ListNode* last = top.second;  
last->next=NULL;
    break;}  
          auto top2 = *s.begin();
ListNode* node = top.second;  
node->next=top2.second;
}
return head;
    }
};