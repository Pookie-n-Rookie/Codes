/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        
        Node*zeroh=new Node(-1);
        Node*oneh=new Node(-1);
        Node*twoh=new Node(-1);
        Node*zero=zeroh;Node*one=oneh;Node*two=twoh;
        Node*temp=head;
        while(temp!=nullptr){
            if(temp->data==0){
                zero->next=temp;
                zero=temp;
            }
        
         else if(temp->data==1){
              one->next=temp;
                one=temp;
        }  
          else{
               two->next=temp;
                two=temp;
        }
        temp=temp->next;}
        
        
        two->next=nullptr;
        one->next=twoh->next;
        
        zero->next=(oneh->next);
        
        // delete(zero);delete(one);delete(two);
        return zeroh->next;
        
    }
};