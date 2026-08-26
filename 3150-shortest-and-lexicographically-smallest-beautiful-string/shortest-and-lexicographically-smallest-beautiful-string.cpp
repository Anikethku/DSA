class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int one=0,i=0,j=0,flag=0,mini=INT_MAX,idx1=-1,idx2=-1;
       while(i<s.size()){
          if(s[i]=='1'){
            one++;
          }
          while(one==k){
                if(mini==i-j+1){
                  int val1=idx1;
                  int val2=j;
                   while(val2<i){
                     if(s[val2]<s[val1]){
                        idx1=j;
                        idx2=i;
                        break;
                     }
                     if(s[val2]>s[val1]) break;
                     val1++;
                     val2++;
                   } 
                }else if(mini>i-j+1){
                    mini=i-j+1;
                    idx1=j;
                    idx2=i;
                }
            
            flag=1;
            if(s[j]=='1'){
                one--;
            }
            j++;
          }
          i++;
       } 
       if(flag==0){
        return "";
       }
       return s.substr(idx1,idx2-idx1+1);
    }
};