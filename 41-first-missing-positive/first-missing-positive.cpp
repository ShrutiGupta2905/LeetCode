class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int miss = 1;
        for(int i = 0;i <= n; i++){
            if(nums[i] == miss) miss++;
        }
        return miss;
    }
};