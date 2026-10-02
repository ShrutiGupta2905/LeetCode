class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi = 0;
        int index = 0;
        for(int i=0;i<mat.size();i++){
            int ones = 0;
            for(int a : mat[i]) ones += a;
            if(ones > maxi){
                maxi = ones;
                index = i;
            }
        }
        return {index, maxi};
    }
};