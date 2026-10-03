class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int ans = 0;
        int index = -1;
        stack<int> st;

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push(i);
            } else {
                if(!st.empty()) {
                    st.pop();
                    if(!st.empty()) ans = max(ans, i - st.top());
                    else ans = max(ans, i - index);
                }
                else index = i;
            }
        }
        return ans;
    }
};