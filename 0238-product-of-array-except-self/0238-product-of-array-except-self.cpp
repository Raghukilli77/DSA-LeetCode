class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
       vector<int> x(n,1);
       int p =1;
       for(int i=0;i<n;i++)
       {
        x[i] = p;
        p *= nums[i];
       }
       int s =1;
       for(int i=n-1;i>=0;i--)
       {
        x[i] *= s;
        s *= nums[i];
       }
        return x;
    }
};