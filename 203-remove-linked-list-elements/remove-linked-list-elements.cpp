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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        if(head==nullptr){
            return head;
        }
        while(head != NULL && head->val == val){
            head = head->next;
        }
        while(temp!=NULL && temp->next != NULL){
          if(temp->next->val==val){
            temp->next = temp->next->next;
            continue;
          }
          temp = temp->next;
        }
        return head;
    }
};