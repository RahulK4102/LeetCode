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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<ListNode*> s1;
        queue<ListNode*> s2;
        queue<int> ans;
        ListNode* node1 = l1;
        ListNode* node2 = l2;
        while(node1!=NULL){
            s1.push(node1);
            node1 = node1->next;
        }
        while(node2!=NULL){
            s2.push(node2);
            node2 = node2->next;
        }
        int sum = 0;
        int carry = 0;
        while(!s1.empty() && !s2.empty()){
            ListNode* first = s1.front();
            ListNode* sec = s2.front();
            s1.pop();
            s2.pop();
            int temp = carry + first->val + sec->val;
            carry = temp/10;
            sum = temp%10;
            ans.push(sum);
        }
        while(!s1.empty()){
            ListNode* TOP = s1.front();
            s1.pop();
            int temp = carry + TOP->val;
            carry = temp/10;
            sum = temp%10;
            ans.push(sum);
        }
        while(!s2.empty()){
            ListNode* TOP = s2.front();
            s2.pop();
            int temp = carry + TOP->val;
            carry = temp/10;
            sum = temp%10;
            ans.push(sum);
        }
        if(carry!=0){
            ans.push(carry);
        }
        if(ans.empty()){
            return NULL;
        }
        ListNode* res = new ListNode(ans.front());
        ans.pop();
        ListNode* temp = res;
        while(!ans.empty()){
            ListNode* temp2 = new ListNode(ans.front());
            ans.pop();
            temp->next = temp2;
            temp = temp->next;
        }
        return res;
    }
};