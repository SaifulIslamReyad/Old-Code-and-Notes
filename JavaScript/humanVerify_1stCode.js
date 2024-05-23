let p= prompt("Verify you are human , write a number : twenty two");
while(1){
    if (p==22) // "22"
        {
            alert("Ok, you are good human");
            break;
        }
    else{
        p=prompt("You are robot, try again");
    }
}