class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int colsum=INT_MIN, rowsum=INT_MIN;
        int final=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp=temp+mat[i][j];
            }
            rowsum=max(rowsum,temp);
        }
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp=temp+mat[j][i];
            }
            colsum=max(colsum,temp);
        }
        int ans=max(rowsum,colsum);
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp=temp+mat[i][j];
            }
            final=final+(ans-temp);
        }
        return final;
    }
};