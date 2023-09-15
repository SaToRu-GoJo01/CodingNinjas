/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */
void createNode(int i,Node*&head,Node*&tail){
    if(head == NULL){
        head = new Node(i);
        head->next = NULL;
        tail = head;
        tail->next = NULL;
    }
    else{
        Node*temp = new Node(i);
        tail->next=temp;
        temp->next = NULL;
        tail = temp;
    }
}
Node* constructLL(vector<int>& arr) {
    Node*head = NULL;
    Node*tail = NULL;
    for(auto i:arr){
        createNode(i,head,tail);
    }
    return head;
}
