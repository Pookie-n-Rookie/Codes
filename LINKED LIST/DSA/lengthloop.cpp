<<<<<<< HEAD


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

int len(Node*s,Node*f){
    int c=1;
    f=f->next;
    while(s!=f){
        c++;
        f=f->next;
    }
    return c;
}
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node*s=head;
    Node*f=head;
    while(f!=NULL &&f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f) return len(s,f);
    }
    return 0;
=======


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

int len(Node*s,Node*f){
    int c=1;
    f=f->next;
    while(s!=f){
        c++;
        f=f->next;
    }
    return c;
}
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node*s=head;
    Node*f=head;
    while(f!=NULL &&f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f) return len(s,f);
    }
    return 0;
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
}