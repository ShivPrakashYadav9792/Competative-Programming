class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> ans;
        ans.push(-1);
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(')
                ans.push(i);
            else
            {
                ans.pop();
                if (ans.empty())
                {
                    ans.push(i);
                }
                else
                {
                    int k = i - ans.top();
                    count = max(k, count);
                }
            }
        }
        return count;
    }
};