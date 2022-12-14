"use strict";
function add(x, y) {
    if (typeof x === 'number' && typeof y === 'number') {
        return x + y;
    }
    if (typeof x === 'string' && typeof y === 'string') {
        return x.concat(y);
    }
    throw new Error('You\'re mixing types!!! LOL');
}
add(1, 3);
add("one", "two");
add(1, "three");
