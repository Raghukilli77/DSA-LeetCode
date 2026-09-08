class Solution {
public:
    int calPoints(vector<string>& operations) {
            stack<int> s;

            for (string op : operations) {
                if (op == "C") {
                    s.pop();
                } else if (op == "D") {
                    s.push(s.top() * 2);
                } else if (op == "+") {
                    int first = s.top(); s.pop();
                    int second = s.top();
                    s.push(first); 
                    s.push(first + second);
                } else {
                    s.push(stoi(op));
                }
            }

            int total =0;
            while (!s.empty()) {
                total += s.top();
                s.pop();
            }
        
    return total;
    }
};