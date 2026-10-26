class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i : arr){
            mp[i]++;
        }
        int count = -1;
        for(auto i : mp){
            if(i.first == i.second) count = max(count, i.first);
        }
        return count;
    }
};