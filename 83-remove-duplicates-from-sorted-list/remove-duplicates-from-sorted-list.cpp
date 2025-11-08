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
        if(head==NULL) return NULL;
        ListNode *ptr=head,*ptr2=head->next;
        while(ptr2!=NULL){
            if(ptr->val==ptr2->val) ptr2=ptr2->next;
            else {ptr->next=ptr2;ptr=ptr2;ptr2=ptr->next;}
        }
        ptr->next=NULL;
        return head;
    }
};