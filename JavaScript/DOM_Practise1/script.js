document.body.style.backgroundColor = "black";
document.body.childNodes[1].innerText = "Bye bye"
let para= document.getElementById("para");
let para2= document.getElementsByClassName("para2");
let p= document.getElementsByTagName("p");
// para2 is a LIST
// html collection of type para
// similar to array, has index, length

// na thakle , null and empty html collection return kore

para.innerText="changed hahahaha";
para2[0].innerText="finally changed";
p[0].innerText="Agaaiinn helloooo";
console.dir(p); //prints html collection


// query selector
let firstP= document.querySelector("p") ;  //returns first p
let p_array= document.querySelectorAll("p"); //returns collecions
let hashP= document.querySelector("#para"); //
let classP = document.querySelector(".para2"); //return first only


console.log(firstP); console.log(firstP.tagName); //p



