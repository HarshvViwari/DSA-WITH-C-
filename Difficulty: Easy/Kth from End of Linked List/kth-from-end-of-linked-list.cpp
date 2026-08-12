/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        stack<int>st;
        int count =0;
        Node* ptr = head;
        
        while(ptr){
            count++;
            st.push(ptr->data);
            ptr = ptr->next;
        }
        
        if(count < k) return -1;
        k--;
        while(k != 0){
            st.pop();
            k--;
        }
        
        return st.top();
    }
};