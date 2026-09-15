class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx =INT_MIN;
        int sum =0;
        for(int i:nums)
        {
          
            mx = max(mx,sum += i);
             if(sum < 0)
            {
                sum =0;
            }
        }
        return mx;
    }
};