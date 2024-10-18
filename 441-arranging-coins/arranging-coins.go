func arrangeCoins(n int) int {
   rowComp:=0; 
   for n>0{
    coinUsed := rowComp +1;
    if n<coinUsed {
        break;
    }
    n = n - coinUsed;
    rowComp++;
   }
   return rowComp;
}