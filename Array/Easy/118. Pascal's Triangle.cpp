class Solution {
public:
   vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    for (int i = 1; i <= numRows; i++)
    {
        vector<int> nums;

        if (i == 1)
        {
            nums.push_back(1);
            res.push_back(nums);
        }
        else
        {
            int j = 0, k = 1;
            nums.push_back(1);
            while (k < i - 1)
            {
                nums.push_back(res[i - 2][j] + res[i - 2][k]);
                j++;
                k++;
            }
            nums.push_back(1);
            res.push_back(nums);
        }
    }
    return res;
}
};
