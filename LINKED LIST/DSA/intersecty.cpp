<<<<<<< HEAD

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL)return NULL;
        ListNode*p1=headA;
        ListNode*p2=headB;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
            if(p1->next==NULL)p1=headB;
            if(p2->next==NULL)p2=headA;
            }
            return p1;


        }
    
=======

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL)return NULL;
        ListNode*p1=headA;
        ListNode*p2=headB;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
            if(p1->next==NULL)p1=headB;
            if(p2->next==NULL)p2=headA;
            }
            return p1;


        }
    
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
};