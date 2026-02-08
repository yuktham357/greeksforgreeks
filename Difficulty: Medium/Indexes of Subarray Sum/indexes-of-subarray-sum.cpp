class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        int e=0,s=0;
        int n=arr.size();
        int curr=0;
        for(int i=0;i<n;i++){
            curr=curr+arr[i];
            if(curr>=target) {
                e=i;
                while(curr>target && e>s){
                    curr=curr-arr[s];
                    s++;
                }
                if(curr==target) {
                    ans.push_back(s+1);
                    ans.push_back(e+1);
                    return ans;
                }
            }
            
        }
        return {-1};
    }
};