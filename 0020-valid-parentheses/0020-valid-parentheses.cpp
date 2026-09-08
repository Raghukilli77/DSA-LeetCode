#include <bits/stdc++.h>
using namespace std;

class Solution {
    stack<char> c;
public:
    bool isValid(string s) {
        for(char m : s) {
            if(m == '(' || m == '[' || m == '{') {
                c.push(m);
            } else {
                if(c.empty()) return false;
                char top = c.top();
                c.pop();
                if((m == ')' && top != '(') ||
                   (m == '}' && top != '{') ||
                   (m == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return c.empty();
    }
};
