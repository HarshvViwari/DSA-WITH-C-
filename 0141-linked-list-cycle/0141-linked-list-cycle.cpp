/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        ListNode*ptr1 = head;
        //ListNode*ptr2 = NULL;

        while(ptr1){
            if(mp.find(ptr1->next) == mp.end()){
                mp[ptr1->next]++;
                //ptr2= ptr1;
                ptr1 = ptr1->next;
            }else{
                return true;
            }
        }
        return false;
    }
};