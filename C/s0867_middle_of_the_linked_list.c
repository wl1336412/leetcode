/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *p,*q;
    if(head==NULL){
        return NULL;
    }
    p=head;
    q=p->next;
    while(q!=NULL){
        p=p->next;
        q=q->next;
        if(q==NULL){
            return p;
        }
        q=q->next;
    }
    return p;
}