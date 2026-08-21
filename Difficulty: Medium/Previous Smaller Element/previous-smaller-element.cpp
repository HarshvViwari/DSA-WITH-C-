class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector<int>ans;
        stack<int>st;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            
            st.push(arr[i]);
        }
        
        return ans;
    }
};