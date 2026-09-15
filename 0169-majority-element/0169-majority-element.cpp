class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
       int count =1;
       for(int i:nums)
       {
            if(i == candidate)
            {
                count++;
            }else
            {
                count--;
                 if(count == 0)
                {
                    count = 1;
                    candidate = i;
                }
            }
           
       }       
      return candidate;
    
    }
};