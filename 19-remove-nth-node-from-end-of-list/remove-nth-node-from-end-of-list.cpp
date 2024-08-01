/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

int getLength(ListNode *head){
    ListNode *temp=head;
    int counter=0;
    while(temp!=NULL){
        temp=temp->next;
        counter++;
    }
    return counter;
}

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getLength(head);
        int targetIndex = len - n;

        if (targetIndex == 0) { 
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        for (int i = 0; i < targetIndex; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
        return head;
    }
};