let str = "Lorem Ipsum is simply dummy text of the printing and typesetting industry";

let i = 0;  
let vowelCount = 0;

while (str[i] !== undefined) 
{ 
    if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
    {
            vowelCount++
    }
    i++;   
}

console.log("Number of vowels: " + vowelCount);