class Solution {
public:
    int minInsertions(string s) {
        int a = 0;
        int o = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') o++;
            else{
                if(i + 1 < s.length() && s[i + 1] == ')') i++;
                else a++;
                if(o > 0) o--;
                else a++;
            }
        }
        a += o * 2;
        return a;
    }
};