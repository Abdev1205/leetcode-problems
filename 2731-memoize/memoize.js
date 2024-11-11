/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    var cache = {}
    return function(...args) {
        const keys = args;

        if(keys in cache){
            return cache[keys];
        }
        else {
            cache[keys] = fn(...args);
            return cache[keys];
        }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */