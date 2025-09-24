const employees = [
    { name: "John", salary: 50000, department: "IT" },
    { name: "Jane", salary: 60000, department: "HR" },
    { name: "Bob", salary: 55000, department: "IT" },
    { name: "Sophie", salary: 75000, department: "HR" },
    { name: "Mike", salary: 65000, department: "IT" },
    { name: "Emily", salary: 80000, department: "HR" },
    { name: "David", salary: 70000, department: "IT" },
];

let id = 1;

const updateEmpDetails = employees.map((item)=>({

    id:id++,
    name:item.name,
    contact: Math.round(Math.random() * 10000000000),
    email:item.name+'@gmail.com',
    salary:item.salary,
    department:item.department

}));

console.log(updateEmpDetails)