// https://leetcode.com/problems/add-two-promises/description/
// /**
//  * @param {Promise} promise1
//  * @param {Promise} promise2
//  * @return {Promise}
//  */
// var addTwoPromises = async function(promise1, promise2) {
//     // var [v1 , v2]= await Promise.all([promise1 , promise2]);
//     // return v1+ v2;
    
//     let value1 = await promise1;
//     let value2 = await promise2;
//     return value1 + value2;

// };

// /**
//  * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
//  *   .then(console.log); // 4
//  */