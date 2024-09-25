/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        Node*temp=head;
        while(temp!=NULL && temp->next!=NULL){
            Node*nxt=temp->next;
            while(nxt!=NULL && nxt->data==temp->data){
                Node*dupl=nxt;
                nxt=nxt->next;
                free(dupl);
            }
            temp->next=nxt;
            if(nxt!=NULL)nxt->prev=temp;
            temp=temp->next;
            
        }
        return head;
    }
};