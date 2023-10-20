/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head == NULL || head->next == NULL){
    
        return NULL;
    }
    Node*tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->prev->next = NULL;
    delete(tail);
    return head;
}
