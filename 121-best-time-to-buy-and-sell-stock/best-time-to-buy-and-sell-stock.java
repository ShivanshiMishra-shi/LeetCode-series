class Solution {
    public int maxProfit(int[] prices) {
        int minPrices=prices[0];
        int maxProfit=0;
        for(int price:prices)
        {
            minPrices=Math.min(minPrices,price);
            maxProfit=Math.max(maxProfit,price-minPrices);
        }
        return maxProfit;

        
    }
}