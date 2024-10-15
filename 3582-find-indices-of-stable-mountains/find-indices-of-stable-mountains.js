/**
 * @param {number[]} height
 * @param {number} threshold
 * @return {number[]}
 */
var stableMountains = function(h, t) {
    let ans = [];

    for(let i=h.length-1; i>0; i--){
        let curr = h[i];
        let prev = h[i-1];

        if(prev>t){
            ans.push(i)
        }
    }

    return ans;
};