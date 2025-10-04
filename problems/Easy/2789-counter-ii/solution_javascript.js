/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
 
var createCounter = function(init) {
    var temp = init;
    return {
     increment: () => ++temp
     ,
     reset: () => { temp = init;
     return temp;}
     ,
     decrement: () => --temp

  

    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */