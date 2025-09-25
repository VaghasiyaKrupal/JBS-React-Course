const person =
{
    name: 'Alice',
    age: 30,
    city: 'New York',
    profession: 'Developer'
};	


const {city,profession,...rest} = person
console.log(city,profession);
