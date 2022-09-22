
const os = require('os');
const path = require('path');
// const math = require('./math');

// console.log(math.add(2,3));
// console.log(math.sub(4,2));
// console.log(math.mul(2,5));
// console.log(math.div(10,10));

const {add, sub, mul, div} = require('./math');

console.log(add(2,3));
console.log(sub(4,2));
console.log(mul(2,5));
console.log(div(10,10));

// console.log('Hello World');
// console.log(global);

// console.log(os.type());
// console.log(os.version());
// console.log(os.homedir());
// console.log(os.hostname());


// console.log(__dirname);
// console.log(__filename);

// console.log(path.dirname(__filename));
// console.log(path.basename(__filename));
// console.log(path.extname(__filename));
// console.log(path.parse(__filename));


//Shanif's dout

// const isprime = (num) => {
//   var count = 0;
//   for (var i = 0; i <= num; i++) {
//     if (num % i == 0) {
//       count++;
//     }
//   }
//   if (count === 2)
//     return true;
//   else
//     return false;
// }


// var arr = [1, 2, 4, 5, 6, 7, 8, 9, 0, 23, 67, 89, 34];
// var arr2=arr.filter(isprime);
// console.log(arr2);