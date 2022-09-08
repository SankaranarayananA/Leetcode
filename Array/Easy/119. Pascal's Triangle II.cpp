class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans;
        long long val = 1;
        for(int r = 0; r <= n; r++){
            ans.push_back(val);
            val = val*(n-r)/(r+1);
        }
        return ans;
    }
};
