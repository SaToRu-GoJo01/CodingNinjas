#include<stack>
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

bool isPalindrome(Node *head)
{
    stack<int> st;
    Node*temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp =temp->next;
    }
    while(head != NULL){
        if(st.top() != head->data){
            return false;
        }
        st.pop();
        head = head->next;
    }
    return true;
}
