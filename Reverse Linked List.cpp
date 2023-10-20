/****************************************************************

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
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Node*temp = head;
    Node*prev = nullptr;
    while(head->next != nullptr){
        Node*nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }
    head->next = prev;
    return head;
}
