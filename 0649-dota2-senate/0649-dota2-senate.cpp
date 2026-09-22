class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> q1;
        queue<int> q2;
        int s = senate.length();
        for(int i=0;i<s;i++)
        {
            if(senate[i] == 'R')
            {
                q1.push(i);
            }else
            {
                q2.push(i);
            }
        }
        while(!q1.empty() && !q2.empty()) {
            int r = q1.front(); q1.pop();
            int d = q2.front(); q2.pop();

            if(r < d) {
                q1.push(r + s);
            } else {
                q2.push(d + s);
            }
        }


        return q1.empty() ? "Dire" : "Radiant";
    }
};