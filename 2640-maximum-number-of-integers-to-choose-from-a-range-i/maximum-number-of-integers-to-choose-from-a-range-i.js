/**
 * @param {number[]} banned
 * @param {number} n
 * @param {number} maxSum
 * @return {number}
 */
var maxCount = function(banned, n, maxSum) {
    const bannedSet = new Set(banned);

    let currentSum = 0;
    let count = 0;

    for (let i = 1; i <= n; i++) {
        if (bannedSet.has(i)) continue;
        if (currentSum + i > maxSum) break;
        currentSum += i;
        count++;
    }

    return count;
};
