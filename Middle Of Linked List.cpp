/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    Node*slow=head,*fast = head;
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == NULL)
        break;
    }
    return slow;
}

