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

    ListNode* reverseLinkedList(ListNode *&prev, ListNode *&curr){
        // base case jab hamra node curr null hai matlab wo last hai to hme prev return karna hai
        if(curr==NULL){
            return prev;
        }
        // ek extra forward node laga ke baki nodes ko pakad ke rakhega
        // taki hamare opertaion ke waqt baki nodes misplace na ho  
        // forward node ko curr ke next de denge 
        ListNode *forward = curr->next;
        // aur ab hum curr ke next ko prev de denge 
        // ise hum age vale vakue next ko piche vale ko de rahe hai 
        curr->next=prev;
        return reverseLinkedList(curr,forward);

    };

    ListNode* reverseList(ListNode* head) {
        // hum prev aur curr ka node create karenge and then we will 
        // hame sare node ka next ko prev value pe point karna hai
        ListNode *prev=NULL;
        ListNode *curr=head;
        return reverseLinkedList(prev,curr);

    }
};