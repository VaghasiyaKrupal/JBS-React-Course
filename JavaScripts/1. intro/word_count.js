let str = "Lorem Ipsum is simply dummy text of the printing and typesetting industry";

let i = 0;
let wordCount = 0;
let inWord = false;

while (str[i] !== undefined) {
    if (str[i] !== " " && inWord === false) 
    {
        inWord = true;
        wordCount++;
    } 
    else if (str[i] === " ") 
    {
        inWord = false;
    }
    i++;
}

console.log("Number of words: " + wordCount);
