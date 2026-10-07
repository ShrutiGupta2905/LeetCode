class Solution {
public:
    unordered_set<string> ans;
    void solve(string& s, int index, int leftremove, int rightremove, int open, string curr){
        if(index == s.length()){
            if(leftremove == 0 && rightremove == 0 && open == 0) ans.insert(curr);
            return;
        }
        if(s[index] == '(' && leftremove > 0){
            solve(s, index + 1, leftremove - 1, rightremove, open, curr);
        }
        if(s[index] == ')' && rightremove > 0){
            solve(s, index + 1, leftremove, rightremove - 1, open, curr);
        }
        if(s[index] != '(' && s[index] != ')'){
            solve(s, index + 1, leftremove, rightremove, open, curr + s[index]);
        }
        else if(s[index] == '('){
            solve(s, index + 1, leftremove, rightremove, open + 1, curr + s[index]);
        }
        else if(open > 0){
            solve(s, index + 1, leftremove, rightremove, open - 1, curr + s[index]);
        }
    }
    vector<string> removeInvalidParentheses(string& s) {
        int leftremove = 0;
        int rightremove = 0;
        for(int c : s){
            if(c == '(') leftremove++;
            else if(c == ')'){
                if(leftremove > 0) leftremove--;
                else rightremove++;
            }
        }
        solve(s, 0, leftremove, rightremove, 0, "");
        return vector<string>(ans.begin(), ans.end());
    }
};