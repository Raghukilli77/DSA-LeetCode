class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++) {
            int need = target - nums[i]; // partner number
            if(mp.find(need) != mp.end()) {
                // found the partner earlier
                return {mp[need], i};
            }
            // store current number with its index
            mp[nums[i]] = i;
        }
        return {};
    }
};