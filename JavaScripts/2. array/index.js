// 2. non-primitive

// 1. array (index,value)
// 2. object (key, value)
// 3. regex

// const arr = [10,20,30,40]

// const arr = new Array(10,20,30)
// console.log(arr[1]);

// const user = [1, "admin", "admin@gmail.com", 7894561214, "male", true]
// console.log(user[2]);

// const user = {
//     id: 1,
//     name: "admin",
//     email: "admin@gmail.com",
//     contact: 65487455,
//     gender: "male",
//     vegetarian: true
// }
// console.log(user.email, user.contact);



// const mobile = [
//     {
//         id: 1,
//         mobileName: "iphone 16 pro max",
//         brand: "apple",
//         price: 150000,
//         color: "desert"
//     },
//     {
//         id: 2,
//         mobileName: "redme 11 pro",
//         brand: "redme",
//         price: 20000,
//         color: "royal blue"
//     },
//     {
//         id: 3,
//         mobileName: "googlepixel 6 pro",
//         brand: "google pixel",
//         price: 60000,
//         color: "mid night blue"
//     }
// ]

// console.log(mobile);

// mobile.map((item,index) => {
//     return (
//         console.log(item.mobileName)
//     )
// });


// console.log(2+3-2/1*23);

// console.log(2 + "3");
// console.log(1 + true);
// console.log(true + true);

// const num = "1";
// console.log(typeof(num));
// const num2 = parseInt(num)
// console.log(typeof(num2));

// const n1 = "1"
// const n2 = 1
// if(n1 === n2){
//     console.log("yes");
// }
// else{
//     console.log("no");
// }

function sum(a,b){
    return a+b;
}

console.log(sum(1,"1"));
