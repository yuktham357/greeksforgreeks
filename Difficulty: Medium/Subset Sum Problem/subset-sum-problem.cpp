class Solution {
  public:
    
    int sumset(vector<int>& arr, int sum,int n,vector<vector<int>> &memo){
        if(n==0) {
            if(sum==0){
                return 1;
            }
            return 0;
        }
        if(memo[n][sum]!=-1){
            return memo[n][sum];
        }
        if(arr[n-1]>sum) return memo[n][sum]=sumset(arr,sum,n-1,memo);
        else return memo[n][sum]=sumset(arr,sum,n-1.,memo)||sumset(arr,sum-arr[n-1],n-1,memo);
    }
    int isSubsetSum(vector<int>& arr, int sum) {
            // code here
            int n=arr.size();
            vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
            return sumset(arr,sum,n, memo);
    }
};