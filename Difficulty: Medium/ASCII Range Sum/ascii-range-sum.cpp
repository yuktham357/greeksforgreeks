class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
       vector<int>ans;
       vector<int>fst(26,-1);
       vector<int>sec(26,-1);
       int n=s.size();
       for(int i=0;i<n;i++){
           if(fst[s[i]-'a']==-1){
               fst[s[i]-'a']=i;
           }
           else{
               sec[s[i]-'a']=i;
           }
       }
       for(int i=0;i<26;i++){
           if(fst[i]!=-1 && sec[i]!=-1){
               int sum=0;
               for(int j=fst[i]+1;j<sec[i];j++){
                   sum=sum+(int)s[j];
               }
               if(sum!=0){
                   ans.push_back(sum);
               }
           }
       }
       return ans;
    }
};