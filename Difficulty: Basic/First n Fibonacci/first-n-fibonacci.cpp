// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>dp;
        if(n==0) return dp;
        dp.push_back(0);
        if(n==1) return dp;
        dp.push_back(1);
        for(int i=2;i<n;i++){
            dp.push_back(dp[i-1]+dp[i-2]);
        }
        return dp;
    }
};