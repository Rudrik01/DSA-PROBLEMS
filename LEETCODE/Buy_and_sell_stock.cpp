/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: 121. Best Time to Buy and Sell Stock
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Time Complexity:0(n)
Auxiliary space:0(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = prices[0],sell,profit = 0,var_profit=0;
       for(int i = 1;i<prices.size();i++){
           if(buy > prices[i]){
               buy = prices[i];
           }
           else{
               sell = prices[i];
               var_profit = sell - buy;
           }
           if(var_profit > profit){
               profit = var_profit;
           }
       }
       return profit;
        
    }
};