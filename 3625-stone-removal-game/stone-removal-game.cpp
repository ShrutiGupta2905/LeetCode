class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10, a = 0;
        while(n >= k){
            n -= k;
            k--;
            a++;
        }
        if(a % 2 == 0) return false;
        return true;
    }
};