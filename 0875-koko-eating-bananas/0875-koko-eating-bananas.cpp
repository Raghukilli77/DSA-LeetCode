class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = *max_element(piles.begin(), piles.end());
        int low =1,high = maxpile;
        while(low < high)
        {
            int mid = low + (high - low) /2;
            long long hours =0;
            for(auto p : piles)
            {
                hours += (p+mid-1)/mid;
            }
            if(hours <= h)
            {
                high = mid;
            }else
            {
                low = mid +1;
            }
        }
       return low;
    }
};