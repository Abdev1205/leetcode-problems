/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let start = 0;
    let end = s.length-1;
    console.log(start + "  "+ end+"\n" );
    while(start<=end){
        console.log(s[start] + " <-> "+s[end]);
        [s[start],s[end]] = [s[end],s[start]];
        start++;
        end--;
    }
};