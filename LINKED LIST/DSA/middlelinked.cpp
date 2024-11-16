<<<<<<< HEAD

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
       ListNode*s=head;
       ListNode*f=head;
       while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
       }
       return s;

    }
};
=======

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
       ListNode*s=head;
       ListNode*f=head;
       while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
       }
       return s;

    }
};
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
