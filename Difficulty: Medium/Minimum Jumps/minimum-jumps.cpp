class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(arr[0]==0) return -1;
        int jump=0;
        int away=0;
        int cur=0;
        for(int i=0;i<n-1;i++){
            away=max(away,arr[i]+i);
            if(i==cur){
                jump++;
                cur=away;
                if(cur>=n-1) break;
            }
            if(i>=away){
                return -1;
            }
        }
        return (cur>=n-1)?jump:-1;
    }
};
