class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int k = nums.size()/2 + nums.size()%2;
        for(int i:nums){
            mp[i]++;
            if(mp[i]==k)return i;
        }
        return 0;
    }
};
