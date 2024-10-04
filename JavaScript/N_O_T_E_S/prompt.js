let x = prompt("guess the number");

while (true) {
  if (x == 5) {
    alert("correct");
    break;
  } else {
    x = prompt("incorrect,guess the number");
  }
}
//prompt returns STRINGS
// so eikhane (===) dile chaaap hoye jeto

// console.log("Test");
// let entername= prompt("ENter your name");
// console.log("your gmail is",entername+entername.length+"@gmail.com");

let p = prompt("Verify you are human , write a number : twenty two");
while (1) {
  if (p == 22) {
    // "22"
    alert("Ok, you are good human");
    break;
  } else {
    p = prompt("You are robot, try again");
  }
}
