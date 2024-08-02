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
    // finding here length of the linked list 
    int getLength(ListNode *head){
        ListNode *temp=head;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }

    ListNode* revrese(ListNode *&head,int k){
        int len=getLength(head);
        if(head==NULL){
            return NULL;
        }

        if(k>len){
            return head;
        }

        // step 1 
        // reversing k elemets
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *forward=curr->next;
        int count=0;
        while(count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }

        // step 2 
        // calling recursively if forward is not url 
        if(forward!=NULL){
            head->next=revrese(forward,k);
        }
        return prev;
    }    

    ListNode* reverseKGroup(ListNode* head, int k) {
        return revrese(head,k);
    }
};