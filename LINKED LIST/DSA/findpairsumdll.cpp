<<<<<<< HEAD
//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    Node*ftail(Node*head){
        Node*tail=head;
        while(tail->next!=NULL)tail=tail->next;
    
        return tail;
    }
    vector<pair<int, int>>findPairsWithGivenSum(Node *head, int target)
    {   vector<pair<int, int>>ans;
        if(head==NULL) return ans;
        Node*s=head;
        Node*e=ftail(head);
        while(s->data<e->data){
            if(s->data+e->data==target){
                ans.push_back({s->data,e->data});
                s=s->next;
                e=e->prev;
            }
            else if(s->data+e->data<target)s=s->next;
            else e=e->prev;
        }
        return ans;
        
    }
=======
//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    Node*ftail(Node*head){
        Node*tail=head;
        while(tail->next!=NULL)tail=tail->next;
    
        return tail;
    }
    vector<pair<int, int>>findPairsWithGivenSum(Node *head, int target)
    {   vector<pair<int, int>>ans;
        if(head==NULL) return ans;
        Node*s=head;
        Node*e=ftail(head);
        while(s->data<e->data){
            if(s->data+e->data==target){
                ans.push_back({s->data,e->data});
                s=s->next;
                e=e->prev;
            }
            else if(s->data+e->data<target)s=s->next;
            else e=e->prev;
        }
        return ans;
        
    }
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
};