class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<int>u(26,0);
        vector<int>l(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                u[s[i]-'A']++;
            }
            if(s[i]>='a' && s[i]<='z'){
                l[s[i]-'a']++;
            }
        }
        string upp="";
        string lo="";
        for(int i=0;i<26;i++){
            while(u[i]>0){
                upp+=('A'+i);
                u[i]--;
            }
        }
        for(int i=0;i<26;i++){
            while(l[i]>0){
                lo+=('a'+i);
                l[i]--;
            }
        }       
        int n=0,m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=upp[n];
                n++;
                
            }
            if(s[i]>='a' && s[i]<='z'){
                s[i]=lo[m];
                m++;
            }
        }
        return s;
        
    }
};