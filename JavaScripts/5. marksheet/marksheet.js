document.getElementById("schoolName").innerHTML = "Vidhyadip Internation School - Surat";
document.getElementById("studentName").innerHTML = "Name: Krupal Vaghasiya";
document.getElementById("rollNo").innerHTML = "Roll No: " + Math.round(Math.random() * 100);
document.getElementById("studentMobile").innerHTML = "Mobile No: " + Math.round(Math.random() * 10000000000);

// Fill total marks (100 each)
let totalMarksCells = document.getElementsByClassName("totalMarks");
for (let i = 0; i < totalMarksCells.length; i++) {
    totalMarksCells[i].innerHTML = 100;
}

// Total marks
const totalMarks = 7 * 100;
document.getElementById("totalMarksSum").innerHTML = totalMarks;

// Subjects
const subjects = [
    "englishMarks",
    "mathMarks",
    "gujaratiMarks",
    "hindiMarks",
    "phisicsMarks",
    "sanskritMarks",
    "socialMarks"
];

// Store obtained marks
let obtainedMarks = [];

// Generate random marks and push into array
subjects.forEach(sub => {
    let marks = Math.round(Math.random() * 100);
    let cell = document.getElementById(sub);

    cell.innerHTML = marks;
    obtainedMarks.push(marks);

    // highlight if marks < 33
    if (marks < 33) {
        cell.style.backgroundColor = "red";
        cell.style.color = "white";
        cell.style.fontWeight = "bold";
    }
});

// Sum of obtained marks
let sumObtained = obtainedMarks.reduce((a, b) => a + b, 0);
document.getElementById("obtainedMarksSum").innerHTML = sumObtained;

// Percentage
let percentage = (sumObtained / totalMarks) * 100;
document.getElementById("percentage").innerHTML = "Percentage: " + percentage.toFixed(2);

// Max and Min
let maxMarks = Math.max(...obtainedMarks);
let minMarks = Math.min(...obtainedMarks);

document.getElementById("maxMarks").innerHTML = "Max Marks: " + maxMarks;
document.getElementById("minMarks").innerHTML = "Min Marks: " + minMarks;

// Check Pass/Fail
let result;

if (obtainedMarks.some(m => m < 33)) {
    result = "Fail";
} else {
    result = "Pass";
}

document.getElementById("passFail").innerHTML = result;

if (result == "Fail") {
    document.getElementById("passFail").style.backgroundColor = "red";
    document.getElementById("passFail").style.color = "white";
} else {
    document.getElementById("passFail").style.backgroundColor = "green";
    document.getElementById("passFail").style.color = "white";
}
