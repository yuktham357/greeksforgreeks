class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        stack<int>st;
        for(int i=0;i<color.size();i++){
            if(!st.empty() && color[i]==color[st.top()] && radius[i]==radius[st.top()]){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        return st.size();
    }
};