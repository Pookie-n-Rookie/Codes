// User function Template for C++


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        Node*temp=*head;
        while(temp!=NULL){
            if(temp->data==x){
                if(temp==*head){
                    *head=temp->next;
                }
                Node*NEXTNODE=temp->next;
                Node*PREVNODE=temp->prev;
                if(NEXTNODE)NEXTNODE->prev=PREVNODE;
                if(PREVNODE)PREVNODE->next=NEXTNODE;
                free(temp);
                temp=NEXTNODE;
            }
            else{
                temp=temp->next;
            }
        }
        
    }
};