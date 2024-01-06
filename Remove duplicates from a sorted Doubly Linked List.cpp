/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
#include<map>
Node * removeDuplicates(Node *head)
{
    // APPROACH #1
    /*map<int,bool> mp;
    while(head != NULL){
        if(!mp[head->data])
        {
            mp[head->data] = true;
            head = head->next;
        }
        else{
            Node*temp = head;
            head = head->next;
            delete  temp;
        }
    }
    head = NULL;
    Node*ptr = head;
    Node*previous = NULL;
    for(auto i:mp){
        if (head == NULL) {
            head = new Node();
            ptr = head;
            ptr->data = i.first;
        }
        else{
            Node*temp = new Node();
            temp->data = i.first;
            temp->prev = ptr;
            ptr->next = temp;
            ptr=temp;
        }
    }
    return head;
    */
    // APPROACH #2
    Node* temp = head;
    while(temp != NULL){
        if(temp->next != NULL && temp->next->data == temp->data){
            Node*temp2 = temp->next;
            temp->next  = temp->next->next;
            temp2->next = NULL;
            delete temp2;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
    
}
