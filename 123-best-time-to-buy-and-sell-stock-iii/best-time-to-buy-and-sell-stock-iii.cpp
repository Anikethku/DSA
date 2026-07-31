class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int hold1=-prices[0];
       int hold2=-prices[0];
       int sold1=0;
       int sold2=0;
       for(int i=0;i<prices.size();i++)
       {
            hold1=max(hold1,-prices[i]);
            sold1=max(hold1+prices[i],sold1);
            hold2=max(hold2,sold1-prices[i]);
            sold2=max(hold2+prices[i],sold2);
       }      
       return sold2;
    }
};