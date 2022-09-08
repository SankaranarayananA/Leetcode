class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0,j=0;
         for (auto i = nums.begin(); i != nums.end(); ++i){
     if(val == *i){
         nums.erase(i);
         i--;
         k++;
     }
        j++;
    }
        return (j-k);
    }
};
