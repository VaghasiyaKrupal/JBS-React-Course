// // 1.

// myArray = ['krupal',8758570666,'vaghasiyakrupal@gmail.com','surat',true]

// myArray[1]="0000000000";
// myArray[3]='Ahmdabad';
// myArray.unshift('JavaScripts');

// console.log(myArray);

///////////////////////////////////////////////////////////////

// 2.

// let myString = 'welcome+to+jbs+IT+Institute+are+learning+js';

// const myArray = myString.split("+")

// let arrlength = myArray.length;

// let lastItem = myArray[myArray.length - 1];

// console.log(myArray);
// console.log("Length:", arrlength);
// console.log("Last Item:", lastItem);

///////////////////////////////////////////////////////////////

// // 3. 

let myArray = ["Ryu","ken","Chun-li","Cammy","Guile","Sakura","Sagat","Juri"];

//Remove last item from array
myArray.pop()
console.log(myArray)

//Adding two items last of the array
myArray.push("Kim","Trump")
console.log(myArray);

//Adding index
let counter = 0
const newArray = myArray.map((item)=>
    `${item}(${counter++})`
)
console.log(newArray);


// 4.

// const birds = ["Parrots","Falcons","Eagles","Emus","Caracaras","Egrets"];

// const eagleIndex = birds.indexOf("Eagles");

// if (eagleIndex !== -1) {
//   birds.splice(eagleIndex, 1);
// }

// const eBirds = birds.filter(bird => bird.startsWith("E"));

// console.log(eBirds);
