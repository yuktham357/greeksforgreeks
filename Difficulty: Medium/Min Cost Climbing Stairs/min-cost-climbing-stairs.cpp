//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n=cost.size();
        int curr,prev1=0,prev=0;
        for(int i=2;i<=n;i++){
            curr=min(cost[i-1]+prev,cost[i-2]+prev1);
            prev1=prev;
            prev=curr;
        }
        return curr;
    }
};