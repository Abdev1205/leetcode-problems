/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {
    let warr = sentence.split(" ");

    let ans = -1
    for(let i=0; i<warr.length; i++){
        if(warr[i].startsWith(searchWord)){
            ans=i+1;
            return ans;
        }
    }

    return ans;
};