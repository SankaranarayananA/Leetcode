class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j<nums.size() && nums[j]==val){
                j++;
            }
            if(j==nums.size()) return k;
            swap(nums[i],nums[j]);
            k++;
        }
        return k;
    }
};
