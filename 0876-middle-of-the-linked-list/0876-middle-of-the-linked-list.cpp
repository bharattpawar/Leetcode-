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
    ListNode* middleNode(ListNode* head) {
   int total=1;
   ListNode* temp=head;
   while(temp->next!=NULL){
total++;
temp=temp->next;
   }  temp=head;total=total/2;
   while(total){
temp=temp->next;total--;
   }
   return temp;
    }
};