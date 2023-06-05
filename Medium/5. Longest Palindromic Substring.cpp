// O(n^2) Approach Very Intuitive
class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        int mxlen =0;
        for (int i = 0; i < s.length(); i++) {
            int left =i;
            int right =i;
          while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        } 
       if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
        left =i;
        right =i+1;
          while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        } 
       if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
        }
        return ans; 
    }

};
