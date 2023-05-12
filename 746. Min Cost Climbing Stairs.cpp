class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>lst(2,0);
        lst[0]=cost[0];
        lst[1]=cost[1];
        for(int i=2; i<cost.size();i++){
            int tmp=cost[i]+min(lst[0],lst[1]);
            lst[0]=lst[1];
            lst[1]=tmp;
        }
        return min(lst[0],lst[1]);
    }
};
