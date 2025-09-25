const mobile = {
    name: "xyz",
    brand: "xyz....",
    price: 80000,
    color: "rich gold",
    details: {
        ram: "6 GB",
        storage: "256GB"
    }
}

// console.log(mobile.details.storage);

// destrucre

// const {price} = mobile
// console.log(price);

// const {details} =  mobile
// console.log(details);

// const {storage} = details
// console.log(storage);

// (...)spread

//  const newmobile = {...mobile,size: "6.6"}
//  console.log(newmobile);

// rest(...)

const {price,...other} = mobile
console.log(price);