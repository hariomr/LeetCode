class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {

        if(p.size() == 0) return 0;
        sort(p.begin() , p.end());
        int arrow = 1;
        int end = p[0][1];

        for(int i = 1; i<p.size() ; i++){
            if(p[i][0] > end){
                arrow++;
                end = p[i][1];
            }
            end = min(p[i][1], end);
        }
        return arrow;
    }
};
