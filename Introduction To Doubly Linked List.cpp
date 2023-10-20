/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */
void createNode(int val,Node*&head,Node*&tail){
    if(head == NULL){
        head = new Node(val);
        tail = head;
    }
    else{
        Node*temp = new Node(val);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
Node* constructDLL(vector<int>& arr) {
    Node*head = NULL,*tail = NULL;
    for(auto i:arr){
        createNode(i,head,tail);
    }
    return head;
}
