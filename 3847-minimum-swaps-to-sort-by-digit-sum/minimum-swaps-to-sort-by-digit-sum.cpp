class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<array<int, 3>> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int digit = 0;
            while(num > 0){
                digit += num % 10;
                num /= 10;
            }
            ans.push_back({digit, nums[i], i});
        }
        sort(ans.begin(), ans.end());
        vector<bool> vis(n, false);
        int swap = 0;
        for(int i=0;i<n;i++){
            if(vis[i] || ans[i][2] == i) continue;
            int cycle = 0;
            int j = i;
            while(!vis[j]){
                vis[j] = true;
                j = ans[j][2];
                cycle++;
            }
            if(cycle > 1) swap += cycle - 1;
        }
        return swap;
    }
};