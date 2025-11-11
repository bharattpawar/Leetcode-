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
    bool hasCycle(ListNode *head) 
    {if(head==NULL)return false;
       vector<ListNode*>check;if(head->next==NULL)return false;
       check.push_back(head);

       ListNode* temp=head->next;

       while(temp!=NULL){
        int n=check.size();
for(int i=0;i<n;i++){
    if(check[i]==temp)return true;
}check.push_back(temp);
temp=temp->next;
       } 
       return false;
    }
};