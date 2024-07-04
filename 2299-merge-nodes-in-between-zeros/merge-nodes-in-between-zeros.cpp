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
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newNode = head->next;
        ListNode* ans = new ListNode(0);
        ListNode* current = ans;
        
        int sum = 0;
        while(newNode!=NULL){
            if(newNode->val==0){
                current->next = new ListNode(sum);
                current = current->next;
                sum=0;
            }
            else{
                sum+=newNode->val;
            }
            newNode = newNode->next;
        }

        return ans->next;
    }
};