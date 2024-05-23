// script.js

// Function to handle click on circle
function handleCircleClick() {
    alert("This is a circle!");
}

// Function to handle click on square
function handleSquareClick() {
    alert("This is a square!");
}

// Function to handle click on diamond
function handleDiamondClick() {
    alert("This is a diamond!");
}

// Get references to the shapes
const circle = document.getElementById("circle");
const square = document.getElementById("square");
const diamond = document.getElementById("diamond");

// Add click event listeners to the shapes
circle.addEventListener("click", handleCircleClick);
square.addEventListener("click", handleSquareClick);
diamond.addEventListener("click", handleDiamondClick);
