class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=0;
        for(int n:fruits)
        {
            int unset=1;
            for(int j=0;j<baskets.size();j++)
            {
                if(n<=baskets[j])
                {
                    baskets[j]=0;
                    unset=0;
                    break;
                }
            }
            count+=unset;
        }
        return count;
    }
};