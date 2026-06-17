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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *prev,*temp=head;
        int size=0;
        while(temp!=NULL) {size++;temp=temp->next;}
        if(size==1) return NULL;
        if(size==2){head->next=NULL; return head;}
        size=size/2;
        temp=head;
        while(size--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};