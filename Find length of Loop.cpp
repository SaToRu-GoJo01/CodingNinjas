/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    if(head == NULL || head->next == NULL) return 0;
        Node*slow=head,*fast=head,*entry = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                while(entry != slow){
                    slow = slow -> next;
                    entry = entry -> next;
                }
                int count = 1;
                slow = slow ->next;
                while(slow != entry){
                    slow = slow->next;
                    count++;
                }
                return count;
            }
        }
        return 0;
}
