class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        deque <int> md , mid;

        int left =0;
        long long ans =0;

        for(int r=0;r<n;r++){
            while(!md.empty() && nums[md.back()] < nums[r]){
                md.pop_back();
            }
            md.push_back(r);

             while(!mid.empty() && nums[mid.back()] > nums[r]){
                mid.pop_back();
            }
            mid.push_back(r);

            while(nums[md.front()] - nums[mid.front()] > 2){
                if(md.front() == left){
                    md.pop_front();
                }
                 if(mid.front() == left){
                    mid.pop_front();
                }

                left++;
            }
            ans += r -left +1;
        }
        return ans;
    }
};
    
