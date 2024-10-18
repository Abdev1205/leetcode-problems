/**
 * @param {number} n
 * @return {number}
 */
var arrangeCoins = function(n) {
    let rc = 0;
    while(n>0){
        let cUsed = rc+1;
        if(n<cUsed){
            break;
        }
        n = n - cUsed;
        rc++;
    }
    return rc;
};