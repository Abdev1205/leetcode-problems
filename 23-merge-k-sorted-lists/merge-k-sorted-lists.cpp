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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Apprroach 1 
        // using min heap to sort the value and then add then in linked list

        priority_queue<int , vector<int> , greater<int>> pq;
        // getting all the value of linked list;
        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            // iterate through the linked list
            while(temp!=NULL){
                // store the value in min heap;
                pq.push(temp->val);
                // cout<<temp->val<<" ";
                temp = temp->next;
            }
            // cout<<endl;
        }

        // now we got min heap value so now add the value in linked list;
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;

        while(!pq.empty()){
            // get the value 
            int value = pq.top();
            // add the value in linked list
            ListNode* temp = new ListNode(value);
            curr->next = temp;
            curr = temp;

            // now pop the value
            pq.pop();
        }

        return ans->next;
    }
};