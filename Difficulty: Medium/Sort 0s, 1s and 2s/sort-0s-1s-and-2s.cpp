class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int count1=0,count2=0,count0=0;
        int index=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
            }
            else if(arr[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        for(int i=0;i<count0;i++){
            arr[index++]=0;
        }
        for(int i=0;i<count1;i++){
            arr[index++]=1;
        }
        for(int i=0;i<count2;i++){
            arr[index++]=2;
        }
    }
    
};