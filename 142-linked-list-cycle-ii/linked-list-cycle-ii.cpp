/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Approach 1 
        // w ecan use map here of node * and in map if node is repearing then we can return that node

        // Approach 2 
        // using slow and fast algo

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            // updating the slow and fast
            slow = slow->next;
            fast = fast->next->next;



            // checkiing if they both collide 
            // then we can say that loop is present 

            if(slow==fast){
                // now we will update the slow pointer to head and move one of them by 1 
                // if they collide once again so that node is starting point of the loop 
                slow = head;
                while(slow!=NULL && fast!=NULL){
                    if(slow==fast){
                        return slow;
                    }
                    slow = slow->next;
                    fast = fast->next;
                }
            }      
        }
        return NULL;
    }
};