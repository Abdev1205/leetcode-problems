class Solution {
public:
    int clumsy(int n) {
        int j=0;
        int ans=0;
        int var=n;
        
        for(int i=n-1;i>=1;i--){
          if(j==0){
            var*=i;
            j++; 
          }
          else if(j==1){
            var/=i;
            j++;
          }
          else if(j==2){
            var+=i;
            ans+=var;
            var=0;
            j++;
          }
          else{

            var=-i;
            j=j%3;
          }
        }
        
        if(var!=0){
            return ans+var;
        }
        return ans;
    }
};