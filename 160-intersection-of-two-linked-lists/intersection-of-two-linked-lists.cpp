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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Approach 1 
        // we can use map

        map<ListNode*,int> mp;
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA!=NULL){
            if(mp.find(tempA)!=mp.end()){
                return tempA;
            }
            mp[tempA]++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            if(mp.find(tempB)!=mp.end()){
                return tempB;
            }
            mp[tempB]++;
            tempB = tempB->next;
        }

        return NULL;
    }
};