Array.prototype.groupBy = function(fn) {
    const grouped = {},length = this.length;
    for(let i=0;i<length;i++){
      const id = fn(this[i]);
      if(grouped[id] === undefined) grouped[id] = [];
      grouped[id].push(this[i]);
    }
    return grouped;
};