class Solution{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int> freq;
            for(int y:nums){
                freq[y]++;
            }
            vector<pair<int,int>> arr;
            for(auto &x:freq){
                arr.push_back({x.second,x.first});
            }
            sort(arr.begin(),arr.end(), greater<pair<int,int>>());

            vector<int>ans;

            for(int i=0;i<k;i++)
            {
                ans.push_back(arr[i].second);
            }

            return ans;

    }
};