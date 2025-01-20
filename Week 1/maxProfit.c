int maxProfit(int* prices, int pricesSize) {
    int min = prices[0], ind, max=0, profit;
    for( int i=0; i<pricesSize; i++){
        if(prices[i]<min){
            min = prices[i];
            ind = i;
        }
        
            profit = prices[i] - min;
            if(profit>max){
                max = profit;
            }
        
    }
    
    
    return max;
}