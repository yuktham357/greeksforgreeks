class Solution {
  public:
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<vector<string>> ans;
        vector<string>curr;
        int n=s.size();
        int ind=0;
        traversal(s,curr,ind,ans);
        return ans;
    }
    void traversal(string &s,vector<string>&curr,int ind,vector<vector<string>>&ans){
        if(ind>=s.size()){
            ans.push_back(curr);
            return ;
        }
        
        string str="";
        for(int i=ind;i<s.size();i++){
            str=str+s[i];
            if(palindrome(s,ind,i)){
                curr.push_back(str);
                traversal(s,curr,i+1,ans);
                curr.pop_back();
            }
        }
    }
    bool palindrome(string &s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]){
               return false;
            }
            start++;
            end--;
        }
        return true;
    }
};