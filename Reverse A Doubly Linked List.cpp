/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    Node*curr = head;
    Node*prev = NULL;
    while(curr != NULL){
        Node*nxt = curr->next;
        curr->next = prev;
        curr->prev = nxt;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

