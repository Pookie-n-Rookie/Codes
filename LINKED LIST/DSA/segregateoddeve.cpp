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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr ||head->next==nullptr){
            return head;}
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*ehead=head->next;
        
        
        while(even!=nullptr && even->next!=nullptr){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=ehead;
        return head;

        
    }
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr ||head->next==nullptr){
            return head;}
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*ehead=head->next;
        
        
        while(even!=nullptr && even->next!=nullptr){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=ehead;
        return head;

        
    }
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
};