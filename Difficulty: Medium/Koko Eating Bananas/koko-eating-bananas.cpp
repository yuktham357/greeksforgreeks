class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int ans=0;
        int start=1,end=*max_element(arr.begin(), arr.end());
        while(start<=end){
            int mid=(start+end)/2;
            int total=0;
            for(int i=0;i<n;i++){
                total += (arr[i] + mid - 1) / mid;
            }
            if(total>k){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};