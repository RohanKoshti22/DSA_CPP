#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int stockbuysell(vector<int>& prices){
int cheapestStock = prices[0];  
int bestProfitFound = 0;

for (int i = 1; i < prices.size(); i++)
{
   cheapestStock = min(cheapestStock , prices[i]);
   int profitIfSold  = prices[i] - cheapestStock;
   bestProfitFound = max(bestProfitFound , profitIfSold);
}
return bestProfitFound;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};

    cout << "Maximum Profit is "<<stockbuysell(prices)<<endl;
    return 0;
}