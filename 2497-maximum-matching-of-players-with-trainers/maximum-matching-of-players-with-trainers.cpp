class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(), trainers.end());
        sort(players.begin(), players.end());
        int count = 0;
        int i = 0, j = 0;
        while(i < players.size() && j < trainers.size()){
            if(players[i] <= trainers[j]){
                count += 1;
                i++;
                j++;
            }
            else if(players[i] > trainers[j]){
                j++;
            }
        }
        return count;
    }
};