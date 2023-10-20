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
int getcount(Node*head){
    if(head == NULL){
        return 0;
    }
    else{
        return 1+getcount(head->next);
    }
}
int length(Node *head)
{
    return getcount(head);
}
