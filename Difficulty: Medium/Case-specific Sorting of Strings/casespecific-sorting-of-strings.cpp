class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<int> u(26, 0); // uppercase A-Z
        vector<int> l(26, 0); // lowercase a-z
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                u[c - 'A']++;
            }
            if (c >= 'a' && c <= 'z') {
                l[c - 'a']++;
            }
        }
        string U = "";
        for (int i = 0; i < 26; i++) {
            while (u[i] > 0) {
                U += ('A' + i);
                u[i]--;
            }
            
        }
        string L = "";
        for (int i = 0; i < 26; i++) {
            while (l[i] > 0) {
                L += ('a' + i);
                l[i]--;
            }
        }
        int ui = 0, li = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c >= 'A' && c <= 'Z') {
                s[i] = U[ui];
                ui++;
            }
            if (c >= 'a' && c <= 'z') {
                s[i] = L[li];
                li++;
            }
        }
        return s; 
    }
};