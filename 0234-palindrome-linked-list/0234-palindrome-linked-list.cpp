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
        string s = "";
        ListNode* ptr = head;

        while(ptr){
            s += to_string(ptr->val);
            ptr = ptr->next;
        }
        string s2 = s;
        reverse(s.begin(),s.end());

        return s == s2;
    }
};