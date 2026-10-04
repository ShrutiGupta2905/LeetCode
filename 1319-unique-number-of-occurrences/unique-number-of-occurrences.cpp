class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i : arr) mp[i]++;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i] == ans[i-1]) return false;
            else continue;
        }
        return true;
    }
};