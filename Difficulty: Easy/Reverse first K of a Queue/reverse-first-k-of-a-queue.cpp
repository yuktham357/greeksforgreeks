class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(q.size()<k) return q;
        vector<int>s;
        while(!q.empty()){
            s.push_back(q.front());
            q.pop();
        }
        for(int i=k-1;i>=0;i--){
            q.push(s[i]);
        }
        for(int i=k;i<s.size();i++){
            q.push(s[i]);
        }
        return q;
    }
};