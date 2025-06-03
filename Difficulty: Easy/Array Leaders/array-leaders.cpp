

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>ans;
        int maxi=arr[n-1];
        ans.push_back(maxi);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi=max(maxi,arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};