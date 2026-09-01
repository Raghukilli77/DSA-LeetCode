class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low < high)
        {
            int mid = low + (high - low)/2;
            int daysneed =1;
            int sum =0;
            for(int w : weights) {
                if(sum + w > mid) { 
                    daysneed++;
                    sum = 0;
                }
                sum += w;
            }
            if(daysneed <= days)
            {
                high = mid;
            }
            else
            {
                low = mid +1;
            }
        }
        return high;       
    }
};