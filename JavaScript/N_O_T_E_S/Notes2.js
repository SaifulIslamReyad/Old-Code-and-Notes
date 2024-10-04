a=1+2;
console.log(a);
b="1"+2;
console.log(b);
console.log(2/3);
x=5;
y="5";
console.log(x==y);
console.log(typeof(x),typeof(y));
console.log(x===y);
//checks the type also
console.log(x!==y);
//and or not = && || !
for (i=0;i<4;i++)
    {
        console.log("OK");
    }
console.log(i);
//i এর ভেলু 4 হবে ,কিন্তু যদি তাকে ব্লকে আটকে দেই?
for (let i=0;i<4;i++)
    {
        console.log("NOt OKK");
    }
//console.log(i);
//তবে ইরর দেখাবে
//means without let keyword , we declare variable global??



// for of arrays and string iterate
for (let i of "hello")
    {
        console.log(i);
    }
//for in arrays, objects
let student={Name:"saif",id:14};
for (let key in student)
    {
        console.log(key ,"= ",student[key]);
    }