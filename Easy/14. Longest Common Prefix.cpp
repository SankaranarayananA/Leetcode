class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string ans = strs[0];
        int len = strs[0].length();
        for(int i=1;i<strs.size();i++){
           int count =0;
           for(int j=0;j<len;j++){
             if(ans[j]!=strs[i][j]) break;
             count++;
           }
           len = count;
           if(len==0) return "";
        }
        return ans.substr(0,len);
    }
};
