class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int unique =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                nums[unique] = nums[i];
                unique++;
            }
        }
        for(int i=unique;i<nums.size();i++)
        {
            nums[unique] = 0;
            unique++;
        }
    }
};