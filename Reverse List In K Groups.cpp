/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    if(head == NULL) return NULL;
    Node*prev = NULL;
    Node*curr = head;
    Node*next = NULL;
    int count = 0;
    int size=0;
    Node *temp=head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    if(size<k){
        return head;
    }
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = kReverse(next,k);
    }
    return prev;
}
