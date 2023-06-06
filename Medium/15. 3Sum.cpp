class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        if(nums[0]>0) return res;
        int n= nums.size();
       for(int i=0;i<n;i++){
           int a = nums[i];
           if(a>0) return res;
           int left = i+1;
           int right = n-1;
           while(left<right && right>i && left<n){
               int sum = a + nums[left] + nums[right];
               if(sum==0){
                   res.push_back({a , nums[left] , nums[right]});
                   left++;
                   right--;
                   while(left<n && nums[left]==nums[left-1])left++;
                   while(right>i && nums[right]==nums[right+1])right--;
               }
               else if(sum>0){
                   right--;
               }
               else left++;
           }
           while(i<n-1 && nums[i]==nums[i+1]) i++;
       }
        return res;
    }
};
