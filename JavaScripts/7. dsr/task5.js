const student = {
    id: 1,
    name: "Krupal",
    age: 22,
    gender: "Male",
    course: "React",
    year: 1,
    grade: "A",
    contact: {
        email: "krupal@example.com",
        phone: "9876543210",
        city: "Surat",
        address: {
            street: "Yogi Chowk",
            pincode: 395010
        }
    }
};

// const = {
//     id,
//     name,
//     age,
//     gender,
//     course,
//     year,
//     grade,
//     contact:
//     {
//         email,
//         phone,
//         city,
//         address:
//         {
//             street,
//             pincode
//         }
//     }
// }

const { id } = student;
console.log(id);

const { name } = student;
console.log(name);

const { age } = student;
console.log(age);

const { gender } = student;
console.log(gender);

const { course } = student;
console.log(course);

const { year } = student;
console.log(year);

const { grade } = student;
console.log(grade);

// Get contact object
const { contact } = student;
console.log(contact);

// Destructure from contact
const { email } = contact;
console.log(email);

const { phone } = contact;
console.log(phone);

const { city } = contact;
console.log(city);

const { address } = contact;
console.log(address);

// Destructure address from contact
const { street } = address;
console.log(street);

const { pincode } = address;
console.log(pincode);



