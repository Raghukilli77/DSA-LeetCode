class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         int time = 0;
        int n = tickets.size();
        
        // simulate the process
        while (tickets[k] > 0) {
            for (int i = 0; i < n; i++) {
                if (tickets[i] > 0) {
                    tickets[i]--;   // person buys one ticket
                    time++;         // one second passes
                }
                if (tickets[k] == 0) {
                    return time;    // stop when person k finishes
                }
            }
        }
        return time;
    }
};