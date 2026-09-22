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
            int r = q1.front(); 
            int d = q2.front(); 

            // if(r < d) {
            //     q1.push(r + s);
            // } else {
            //     q2.push(d + s);
            // }
            if(r<d){
                q2.pop();
                q1.push(s+r);
                q1.pop();
            }
            else{
                q1.pop();
                q2.push(s+d);
                q2.pop(); 
            }
        }


        return q1.empty() ? "Dire" : "Radiant";
    }
};