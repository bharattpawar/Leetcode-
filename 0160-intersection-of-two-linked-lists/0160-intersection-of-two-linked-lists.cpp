/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>check;
         ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            if(check.find(temp1)!=check.end()){
                return temp1;
            }
        
check[temp1] = 1;
temp1=temp1->next;
} 
         while(temp2!=NULL){
           
               if(check.find(temp2)!=check.end()){
                return temp2;
            }

check[temp2] = 1;

temp2=temp2->next;

        } return NULL;       


    }
};