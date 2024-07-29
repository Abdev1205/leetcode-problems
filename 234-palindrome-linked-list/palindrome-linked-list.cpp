/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

  ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* forward = curr->next;

    while (curr != nullptr ) {
      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
    }
    return prev;
  }

  bool isPalindrome(ListNode* head) {

    if (head == nullptr) {
      return true; // Handle empty list
    }

    if (head->next == nullptr) {
      return true; // Handle single-node list
    }

    // Step 1: Find middle element
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr) {
      fast = fast->next;
      if (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
      }
    }

    // Step 2: Reverse linked list from middle element
    ListNode* reverseLinkedListKaHead = reverse(slow);

    // Step 3: Compare the linked lists
    ListNode* temp1 = head;
    ListNode* temp2 = reverseLinkedListKaHead;

    while (temp2 != nullptr && temp1 != nullptr) {
      if (temp1->val != temp2->val) {
        return false;
      } else {
        temp1 = temp1->next;
        temp2 = temp2->next;
      }
    }

    return true;
  }
};
