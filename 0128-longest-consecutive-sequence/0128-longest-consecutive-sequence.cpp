class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
         sort(nums.begin(),nums.end());
        int count =1;
        int mx=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if (nums[i] == nums[i+1]) {
                continue;
            }
            if(nums[i] + 1 == nums[i+1])
            {
                count++;
            }else
            {
            count =1;
            }
                        mx = max(mx,count);
        }
        return max(mx, count);
    }
};