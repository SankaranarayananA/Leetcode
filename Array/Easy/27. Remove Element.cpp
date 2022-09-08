class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int low=0,high= nums.size()-1;
        while(low <= high){
            if(nums[low]==val && nums[high]!=val){
                swap(nums[high],nums[low]);
                low++;
                high--;
            }
            else if(nums[low] != val ){
                low++;
            }
            else high--;
        }
        return low;
    }
};
