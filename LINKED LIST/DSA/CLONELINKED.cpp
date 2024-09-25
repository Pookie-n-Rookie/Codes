/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void deepcopy(Node*head){
        Node*temp=head;
        while(temp!=NULL){
            Node*cpn=new Node(temp->val);
            cpn->next=temp->next;
            temp->next=cpn;
            temp=temp->next->next;
        }
        
    }
    void point(Node*head){
         Node*temp=head;
        while(temp!=NULL){
            Node*cpn=temp->next;
            if(temp->random){
                cpn->random=temp->random->next;
            }
            else cpn->random=nullptr;
            temp=temp->next->next;
        }
    }
    Node*brokelink(Node*head){
        Node*dn=new Node(-1);
        Node*res=dn;
        Node*temp=head;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dn->next;
            }
    Node* copyRandomList(Node* head) {
        deepcopy(head);
        point(head);
        return brokelink(head);
    }
};