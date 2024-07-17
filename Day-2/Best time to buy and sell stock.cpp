class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
        {
            return 0;
        }
        int maxprice=0;
        int minprice=prices[0];

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else
            {
                int currprofit=prices[i]-minprice;
                maxprice=max(maxprice,currprofit);
            }
        }
        return maxprice;
    }
};
