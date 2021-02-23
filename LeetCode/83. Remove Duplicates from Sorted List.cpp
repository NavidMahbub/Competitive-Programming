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
    ListNode* temp=head;
    ListNode *a;
    while(temp!=NULL&&temp->next)
    {
        if(temp->next->val!=temp->val)
            temp=temp->next;
        else
        {
            a=temp->next;
            while(a!=NULL&&a->val==temp->val)
                a=a->next;
            temp->next=a;  
        }
    }
    return head;
}
};