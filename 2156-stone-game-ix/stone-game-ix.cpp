class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
     int count1=0,count2=0,count3=0;
     for(int i=0; i<stones.size(); i++){
         if(stones[i]%3==0){
            count1++;
         }else if(stones[i]%3==1){
           count2++;
         }else{
            count3++;
         }
     }
         if(count1%2==0){
            return count3>0 && count2>0;
         }
         return abs(count2-count3) > 2;
    }
};