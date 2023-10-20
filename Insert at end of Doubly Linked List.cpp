/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    if(head == NULL){
        head = new Node(k);
        return head;
    }
    Node*tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node*temp = new Node(k);
    tail->next = temp;
    temp->prev = tail;
    return head;
}
