#include<unordered_map>
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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node*,int> mp;
    while(firstHead != NULL){
        mp[firstHead]++;
        firstHead = firstHead->next;
    }
    while(secondHead != NULL){
        if(mp[secondHead] == 1){
            return secondHead;
        }
        secondHead = secondHead->next;
    }
    return NULL;
}
