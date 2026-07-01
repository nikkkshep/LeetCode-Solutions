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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        while (temp != NULL) {
            st.push(temp);
            temp = temp->next;
        }
        while (head!= NULL) {
             cout<<st.top()->val<<" ";
                cout<<head->val<<endl;
            if (st.top()->val == head->val) {
                cout<<st.top()->val<<" ";
                cout<<head->val<<endl;
                st.pop();
                head = head->next;
            } else {
                return false;
            }
        }
        return true;
    }
};