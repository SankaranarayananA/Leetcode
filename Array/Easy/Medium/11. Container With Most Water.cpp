class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;
        int area = 0;
        while (l < r)
        {
            int v = (r - l) * min(height[l], height[r]);
            if (height[l] < height[r])
                l++;
            else if (height[r] < height[l])
                r--;
            else
            {
                l++;
                r--;
            }
            area = max(v, area);
        }

        return area;
    }
};