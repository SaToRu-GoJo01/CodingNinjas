/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* solve(Node* head){
    if (!head || !head->next) {
        // If the linked list is empty or has only one node, no need to segregate
        return head;
    }
    Node*odd=NULL,*oddTail = NULL;
    Node*even=NULL,*evenTail = NULL;
    while(head){
        if(head->data % 2 == 0){
            if(even == NULL){
                even = head;
                evenTail = head;
            }
            else{
                evenTail->next = head;
                evenTail = evenTail->next;
            }
        }
        else{
            if(odd == NULL){
                odd = head;
                oddTail = head;
            }
            else{
                oddTail->next = head;
                oddTail = oddTail->next;
            }
        }
        head = head->next;
    }
    oddTail->next = NULL;
    evenTail->next = odd;
    return even;
}
Node* segregateEvenOdd(Node* head)
{
    return solve(head);
}
