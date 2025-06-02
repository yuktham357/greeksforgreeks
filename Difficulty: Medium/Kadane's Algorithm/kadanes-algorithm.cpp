class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
         int n=arr.size();
        int curr=0,Maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            curr=curr+arr[i];
            Maxsum = max(curr,Maxsum);
            if(curr<0){
                curr=0;
            }
        }
        return Maxsum;
    }
};