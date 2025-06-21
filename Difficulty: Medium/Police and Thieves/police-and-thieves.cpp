class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n = arr.size();
        queue<int> policemen;
        int caught = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 'P') policemen.push(i);
        }
        for (int i = 0; i < n; ) {
            if (arr[i] != 'T') {
                i++;
                continue;
            }
            while (!policemen.empty() && abs(policemen.front() - i) > k) {
                if (policemen.front() < i) {
                    policemen.pop();
                } else {
                    break;
                }
            }
            if (!policemen.empty() && abs(policemen.front() - i) <= k) {
                caught++;
                policemen.pop();
            }
            i++;
        }
        return caught;
    }
};