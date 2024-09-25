// reverse k nodes of a linked list 
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
    ListNode*reversell(ListNode*temp){
         ListNode* prev=NULL;
        ListNode* curr=temp;
        ListNode* Next= NULL;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;

    }
    ListNode* findkth(ListNode*temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prv=NULL;
        while(temp!=NULL){
            ListNode*kth=findkth(temp,k);
            if(kth==NULL){
                if(prv)prv->next=temp;
                break;
            }
            ListNode*nxt=kth->next;
            kth->next=NULL;
            reversell(temp);
            if(temp==head)head=kth;
            else{
                prv->next=kth;
               
            }
            prv=temp;
            temp=nxt;}
            return head;
    }
};