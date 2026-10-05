class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') st.push(i);
            else{
                st.pop();
                if(s[i-1] == '(') score += pow(2, st.size());
            }
        }
        return score;
    }
};