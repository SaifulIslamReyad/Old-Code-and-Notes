// Nan means Not a Number
numberSystem= 255;
console.log(numberSystem.toString(16));
// can have the base from 2 to 36
// if not parameter passed it converts in into string
let num= 55555555; 
let strr= num.toString();
console.log(strr, typeof(strr));
x= 6;
var x;
// var hoising hoia upre coilla jay and amon hoy /// var x= undefined /// pore assign hoy
// kintu let er somoy hoisted hoy kintu undefined assign hoyna jar karone let diya ai kaj kora jayna and this situation is called temporal dead zone
let z= 10e5;
let Z= 10e-5;

console.log(z,Z);
let y;
console.log(typeof(y));

let car={
    name:"BMW",
    age:23,
    start: function(x,y){
        console.log("hello");
    }
}

// ja bojhlam Object hoilo :
//1. class chara e object banan jay
//2. object onekta dictionary er moto


let xx= 5; // Literal syntax
let yy= new Number(5); //Object
console.log(typeof(xx),typeof(yy));
// Number, String, Booolean
console.log(xx==yy, xx===yy); //interesting
// and we cannot compare two objects
let zz= new Number(5)
console.log(zz==yy);


// console.log("hello \t hello \vhello \nhello hello\b");  
// check this

let str = "amar nam reyad";
let sss = str.split('').reverse().join('');
console.log(sss); // Output: "dayer man rama"
// str.split('') splits the string into an array of characters.
// reverse() reverses the array of characters.
// join('') joins the array back into a string.
