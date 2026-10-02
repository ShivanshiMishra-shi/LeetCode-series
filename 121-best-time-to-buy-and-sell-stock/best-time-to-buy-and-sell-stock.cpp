class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice= prices[0];
        int maxprofit = 0;

        for(int price:prices)
        {
            minPrice=min(minPrice,price);
            maxprofit=max(maxprofit,price-minPrice);
        }
        return maxprofit;
    }
};