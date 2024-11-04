/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    const pr = new Promise((fn)=>setTimeout(fn,millis));

    return pr;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */