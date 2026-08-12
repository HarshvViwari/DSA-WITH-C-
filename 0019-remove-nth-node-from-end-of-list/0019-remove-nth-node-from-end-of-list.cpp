class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int num = 0;

        while(ptr){
            num++;
            ptr = ptr->next;
        }
        num = num +1 - n;

        if(num == 1) return head->next;
        
        int i=1;
        ptr = head;

        while(i < num-1){
            ptr = ptr->next;
            i++;
        }
        ListNode* ptr2 = ptr->next;
        ptr->next = ptr2->next;

        return head;
    }
};