class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        int m = candies[0];
        for(int c : candies){
            m = c;
            if(m > maxi) maxi = m;
        }
        vector<bool> can(candies.size());
        for(int i=0;i<candies.size();i++){
            int n1 = candies[i] + extraCandies;
            if(maxi <= n1) can[i] = true;
            else can[i] = false;
        }
        return can;
    }
};