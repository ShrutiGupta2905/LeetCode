class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0, count = 0, num = 0;
        for(int i : nums){
            num = i;
            maxi = max(maxi, num);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] < maxi){
                int req = maxi - nums[i];
                nums[i] += req;
                count += req;
            }
        }
        return count;
    }
};