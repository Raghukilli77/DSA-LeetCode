class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>example;
        for(int x:nums){
            example.push_back(x);
        }
        sort(example.begin(),example.end());
        int left =-1;
        int right =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != example[i]){
                if(left == -1){
                    left =i;
                }
                right = i; 
            }
        }
        if(left == -1){
            return 0;
        }
        return right - left +1;
    }
};