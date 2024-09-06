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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next= head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        // addding nums value in 
        unordered_map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }

        while(curr!=NULL){
            if (mp.find(curr->val) != mp.end()) {
                prev->next = curr->next;
                delete curr;  
                curr = prev->next;  
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};