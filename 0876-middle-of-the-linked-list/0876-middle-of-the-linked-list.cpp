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
    ListNode* middleNode(ListNode* head) {
        int n =0;
        ListNode*ptr = head;

        while(ptr){
            n++;
            ptr = ptr->next;
        }
        int i=1;
        ptr = head;
        if(n%2 != 0){
            while(i <= n/2){
                ptr = ptr->next;
                i++;
            }
        }else{
            while(i<= n/2){
            ptr = ptr->next;
            i++;
            }
        }

        return ptr;
    }
};