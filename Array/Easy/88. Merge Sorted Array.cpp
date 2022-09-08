class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        int arr[nums1.size()];
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                arr[k++]= nums1[i++];
            }else{
                arr[k++]=nums2[j++];
            }
        }
        while(i<m) arr[k++]=nums1[i++];
        while(j<n) arr[k++]=nums2[j++];
        for(int i=0;i<nums1.size();i++){
            nums1[i]=arr[i];
        }
    }
};
