class Solution {
  public:
    int countsubstr(string& s, int k) {
        // code here.
        int count = 0;
        int start = 0;
        int distinct = 0;
        vector<int>freq(26,0);
        int n = s.size();
        for(int i = 0;i<n;i++){
            freq[s[i]-'a']++;
            if(freq[s[i]-'a'] == 1)distinct++;
            while(distinct >k){
                freq[s[start]-'a']--;
                if(freq[s[start]-'a'] == 0)distinct--;
                start++;
            }
            count += i-start+1;
        }
        return count;
    }
    
    int countSubstr(string& s, int k) {
        return countsubstr(s,k)-countsubstr(s,k-1);
    }
};