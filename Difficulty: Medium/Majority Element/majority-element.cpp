// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
         
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int candidate=arr[n/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==candidate){
                count++;
            }
            
        }
        if(count>n/2){
            return candidate;
        }
        else {
            return -1;
        }
    }
};