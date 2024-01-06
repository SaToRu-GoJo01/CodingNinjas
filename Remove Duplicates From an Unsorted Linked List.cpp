#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // APPROACH #1
    unordered_map<int,bool> mp;
    Node*temp = head;
    Node*prev = NULL;
    while(temp != NULL){
        if(mp[temp->data]){
            Node*temp2 = temp;
            temp = temp->next;
            prev->next = temp;
            temp2->next = NULL;
            delete temp2;
        }
        else{
            prev = temp;
            mp[temp->data] = true;
            temp = temp->next;
        }
    }
    return head;
}
