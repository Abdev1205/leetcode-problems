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
    ListNode* sortList(ListNode* head) {
        // Approach 1 
        // uisng extra space like vector and sorting the vector and just updating the val 
        // Chaeaper Approach but we can try

        vector<int> arr;
        ListNode* temp = head;

        while(temp!=NULL){
            int val = temp->val;
            arr.push_back(val);

            temp = temp->next;
        }

        // now we have acces to all the value in list 
        // so we can just sort the vector and upoadte the val of list
        sort(arr.begin(),arr.end());

        temp = head;
        int i=0;
        while(temp!=NULL){
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }

        return head;
    }
};