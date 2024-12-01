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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*t1=list1;
        ListNode*t2=list2;
        ListNode*dn=new ListNode(-1);
        ListNode*temp=dn;
        if(t1==NULL || t2==NULL){
            if(t1) return list1;
            else return list2;
        }
        while(t1!=NULL &&t2!=NULL){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
            if(t1)temp->next=t1;
            else temp->next=t2;

        }
        return dn->next;


    }
   ListNode* mid(ListNode* head){
      
        ListNode*slow= head;
        ListNode*fast= head->next;
        while(fast!=NULL &&fast->next!=NULL){
            slow=slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
   

   
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

       
        ListNode* middle= mid(head);
        ListNode* left= head;
        ListNode* right= middle->next;
        middle->next=NULL;
        
        
        left=sortList(left);
        right=sortList(right);
        ListNode*res= mergeTwoLists(left,right);
        return res;

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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*t1=list1;
        ListNode*t2=list2;
        ListNode*dn=new ListNode(-1);
        ListNode*temp=dn;
        if(t1==NULL || t2==NULL){
            if(t1) return list1;
            else return list2;
        }
        while(t1!=NULL &&t2!=NULL){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
            if(t1)temp->next=t1;
            else temp->next=t2;

        }
        return dn->next;


    }
   ListNode* mid(ListNode* head){
      
        ListNode*slow= head;
        ListNode*fast= head->next;
        while(fast!=NULL &&fast->next!=NULL){
            slow=slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
   

   
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

       
        ListNode* middle= mid(head);
        ListNode* left= head;
        ListNode* right= middle->next;
        middle->next=NULL;
        
        
        left=sortList(left);
        right=sortList(right);
        ListNode*res= mergeTwoLists(left,right);
        return res;

    }
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
};