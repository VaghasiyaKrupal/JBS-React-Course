let count = 0;
let i = 0;
let str = "Loram Ipsum is simply dummy text of the printing and typesetting industry";


while (str[i] !== undefined) 
{
    if (str[i] === 'a' || str[i] === 'A') 
    {
        count++;
    }
    i++;
}

console.log(count); 