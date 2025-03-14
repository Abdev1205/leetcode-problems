/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let str = s.split(" ");
    str = str.reverse();
    console.log(str);
    
    let ans = "";

    for(let i=0; i<str.length; i++){
        if(str[i].length==0){
            continue;
        }
        else{
            ans+=str[i];
            ans+=" ";
        }
    }

    ans = ans.slice(0,-1);

    return ans;
};