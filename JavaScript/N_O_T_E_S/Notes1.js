//প্রিন্ট করতে console.log() না লিখে inspect->console এ গিয়ে যা লেখবো তাই প্রিন্ট হবে যা ব্রাকেটের মধ্যে লিখি
//তাই 1+1 লেখলে 2  প্রিন্ট হবে , and we should do this 

let myString = "Hello";
// Attempting to change a character of the string (this won't work because strings are immutable)
myString[0] = "J";
console.log(myString); // Output will still be "Hello"
myString = "j" + myString.slice(1);
console.log(myString); // Output will be "jello"
// Reassigning a new value to myString
myString = "Jellllllllo";
console.log(myString); // Output will be "Jelllllllllo"

let name = "reyad";
console.log(name); // Output will be "reyad"
console.log(typeof name); // Output will be "string"
name = 12;
console.log(name); // Output will be 12
console.log(typeof name); // Output will be "number"

let a = undefined;
let b = null;
let c = true;
//1.4 and 1 both typeof number
//value of a= undefined and its type in also "undefined"
// value of b= null but its type is "object"
// primitive types = string , number , boolean , undefined , null
//reference types= object , array , function

let person={name:"Reyad", address : "Vatikhana", age:22 };
let person2={
    name:"Reyad", 
    address : "Vatikhana", 
    age:22 
};

console.log(person);
person.name = 'Saiful';
person["age"] = 23;
console.log(person);
let i= 'age';
console.log(person[i]);

//list
let arr=['aa','bb'];
console.log(arr);
console.log(arr[0]);
arr[3]='cc' ; //not allowed in python
console.log(arr); 
console.log(arr[5]);

function printtt(name)
{
    console.log("helllllo",name);
    return hello;
}

//JS is dynamically typed language
// name= reyad;
//name = 25;
// let  না লেখলেও সেইম ,  তবুও করা উচিত
// var, let ,cons তিন মাল
//সর্বদা let ইউজ করবো, কন্সটান্ট এ cons
// var a=5; var a=6; //এখানে ইরর দেখায় না তাই  var কখন ব্যবহার করবোনা
//var= can be redeclared , update ////global variable
// let = not redeclared , update ////block scope variable
//cons= not redeclare, not update////block scope variable
let aa;
console.log(a);
// cons aa; is error
/// objects catagory= (arrays, functions)

const NAME= "saif";
// cant change this name
const person3 = {
    nam :"saif",
    roll: 12,
};
// but we can change the KEY of nam
person3.nam= "rrrr";
console.log(person3.nam);