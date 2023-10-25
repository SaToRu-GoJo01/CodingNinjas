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

Node* removeKthNode(Node* head, int K)
{
    Node*temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    K = (count - K + 1);
    if(K == 1){
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    Node*prev = NULL;
    temp = head;
    count = 1;
    while(temp != NULL && count != K){
        count++;
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
    return head;
}
