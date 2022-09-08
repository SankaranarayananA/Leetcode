class Solution {
    int i,j;
public:
    int removeDuplicates(vector<int>& nums) {
        j=1;
        for( i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
    
        
        return j;
    }
};
