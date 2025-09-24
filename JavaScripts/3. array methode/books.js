const books = [
    { title: "Book A", author: "Author A", pages: 100 },
    { title: "Book B", author: "Author B", pages: 150 },
    { title: "Book C", author: "Author C", pages: 300 },
    { title: "Book D", author: "Author D", pages: 450 },
    { title: "Book E", author: "Author E", pages: 120 },
];



//First method
const updatedBooks = books.map((item) => ({

    title: item.title,
    author: item.author,
    pages: item.pages + 50

}));



// Second method
const secondBooks = []

books.map((item) => {

    let updatedPages = item.pages + 50;

    secondBooks.push({
        title: item.title,
        author: item.author,
        pages: updatedPages
    });
});

console.log(secondBooks);
