class Solution {
public:
    string convert(string s, int numRows) {
       //my algo
       // first I will check wether num rows =1 then i will return s
       // else i will  create a vetor of string and store all s with their direction

       // if no of roows equals to 1 then we will return s
       if(numRows==1) return s;

       vector<string>zigzag(numRows);
       int i=0;
       int row=0;
       int direction=1; // 1 implies top to bottom direction

       // adding infinite loop 
       while(true){
           if(direction){
               while(row < numRows && i<s.size()){
                   zigzag[row++].push_back(s[i++]);
               }
               //updating row to change the direction
               row=numRows-2;
           }
           else{
               while( row>=0 && i<s.size()){
                   zigzag[row--].push_back(s[i++]);
               }
               //updating row to change the direction
               row=1;
           }
           if(i>=s.size()) break;
           direction = !direction;
       }
       string ans="";
       for(int i=0; i<zigzag.size(); i++){
           ans+=zigzag[i];
       }
       return ans;
    }
};
