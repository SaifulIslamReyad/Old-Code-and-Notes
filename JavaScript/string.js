let str= "          hello world";
console.log(str.length);
// double quotes and single quotes both alllowed

// TEMPLATE LITERALS
let backteks_special_string= `helloworld`
// this can contain variable
console.log(backteks_special_string);
a=5
b=3
let s= `value of a is ${a} \n and value of b is ${b} and 1+1 is ${1+1}`; // string interpolation ,,, allows placeholders
console.log(s);
//returns a string
console.log("heeee\nllooo");
//strings are immutable
str= str.toUpperCase();
console.log(str);
str = str.trim();
console.log(str);
console.log(str.slice(2,4));
console.log(str.slice(4));
let name1= "Saif";
let name2= "REyad";
let name= name1.concat(name2);
console.log(name);
// can be concatinated into name1 also
nam= name1 + name2;
console.log(nam);
nam = nam.replace("Saif","Saiful Islam");
console.log(nam);
nam= nam.replaceAll("a","b");
console.log(nam);
////////////////////////////////////
console.log(nam[0]);
console.log(nam.charAt(0));
/////////////////////////////
// to change a particular character
nam[0]='X'; //wont work
console.log(nam);
// immutable string
nam= nam.replace("S","s");
console.log(nam);
