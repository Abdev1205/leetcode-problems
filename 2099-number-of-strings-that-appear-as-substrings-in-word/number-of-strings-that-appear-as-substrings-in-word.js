/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
    return patterns.reduce(function(accumulator,p){
        if(word.includes(p)){
            accumulator = accumulator +1;
        }
        return accumulator;
    },0)
};