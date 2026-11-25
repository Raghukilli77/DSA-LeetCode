class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> indexmap;
        for(int i=0;i<nums.size();i++){
           if(indexmap.count(nums[i]) && (abs(i - indexmap[nums[i]]) <= k)){
             return true;
           }
           indexmap[nums[i]]=i;
        }
        return false;
    }
};