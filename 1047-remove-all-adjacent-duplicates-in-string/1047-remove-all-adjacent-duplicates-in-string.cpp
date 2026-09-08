class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> a;
        for(char x : s)
        {
              if (!a.empty() && x == a.top())
            {
                a.pop();
            }else
            {
                a.push(x);
            }
        }
        string result;

        while(!a.empty())
        {
            result.push_back(a.top());
            a.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};