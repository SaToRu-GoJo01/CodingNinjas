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

Node *deleteLast(Node *head){
    if (head == nullptr)
    return head;
    if (head -> next == nullptr) {
        delete head;
        head = nullptr;
        return head;
    } else {
        Node * curr = head, * prev = nullptr;
        while (curr -> next != nullptr) {
        prev = curr;
        curr = curr -> next;
        }
        prev -> next = nullptr;
        delete curr;
    }
    return head;
}
