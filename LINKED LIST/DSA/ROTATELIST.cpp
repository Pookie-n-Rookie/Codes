<<<<<<< HEAD
// rotate a linked list by k position
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
    int length(ListNode*head){
        ListNode*temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
         int l=length(head);
     if(head==NULL || head->next==NULL||k==0||k%l==0)return head;
     int act=k%l;
     int c=0;
      
      while(c!=act){
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp->next!=NULL){
              prev=temp;
              temp=temp->next;
        }

        temp->next=head;
        prev->next=NULL;
        head=temp;
        c++;
      }
      return head;  
    }
};
=======
// rotate a linked list by k position
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
    int length(ListNode*head){
        ListNode*temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
         int l=length(head);
     if(head==NULL || head->next==NULL||k==0||k%l==0)return head;
     int act=k%l;
     int c=0;
      
      while(c!=act){
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp->next!=NULL){
              prev=temp;
              temp=temp->next;
        }

        temp->next=head;
        prev->next=NULL;
        head=temp;
        c++;
      }
      return head;  
    }
};
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
