class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
       unordered_map<int,int>freq;
       int n=mat1.size();
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               freq[mat1[i][j]]++;
           }
       }
       int count=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               int a=mat2[i][j];
               int b=x-a;
               if(freq.find(b)!=freq.end()){
                   count=count+freq[b];
               }
           }
       }
       return count;
    }
};