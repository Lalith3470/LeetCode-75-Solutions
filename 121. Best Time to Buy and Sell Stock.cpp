class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int val=prices[0];
        int cnt=0;
        for(int i=1;i<prices.size();i++){
            int tmp=prices[i]-val;
            if(cnt<tmp) cnt=tmp;
            val=min(prices[i],val);
        }
        return cnt;
    }
};
