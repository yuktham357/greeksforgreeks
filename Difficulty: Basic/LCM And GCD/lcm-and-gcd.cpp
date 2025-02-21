//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int lcm = 1;
        int gcd = 1;
        int prod = a * b;
        while(a != 0 && b != 0){
            if(a > b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if(a == 0){
            gcd = b;
        }
        else if(b == 0){
            gcd = a;
        }
        lcm = prod / gcd;
        return {lcm, gcd};
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends