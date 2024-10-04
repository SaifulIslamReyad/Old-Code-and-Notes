{
  {
    {
      {
        {
          {
            //arrays = python list
            let arr = ["reyad", 14, "ok"];
            console.log(arr);
            //type= object
            console.log(arr.length);
            //arrays are mutable
            //strings are immutable
            for (let i = 0; i < arr.length; i++) {
              console.log(i);
            }
            //we can use both for of and  for in loop in arrays

            for (let element of arr) {
              console.log(element);
            }
            for (let index in arr) {
              console.log(arr[index]);
            }
            console.log("/////////////////////////////////////////////////");
            // for in loop works with index,keys
            let brr = [1, 2, 3, 4, 5];
            brr.push(222, 12121212, 999999);
            brr.pop(); // returns the poped item , last item
            console.log(brr);
            let x = brr.pop();
            console.log("x", x);
            console.log(brr);
            // to string just make a string of that array
            let crr = [99999, 9999, 999, 99, 9];
            console.log(crr.toString());
            // crr
            // => [99999, 9999, 999, 99, 9] // printed as numbers
            // crr.toString()
            // => '99999,9999,999,99,9' // printed as string
            console.log("//////////////////////////");
            let drr = brr.concat(crr);
            console.log(drr);
            console.log(brr, "\n", crr);
            crr.unshift("OKK");
            console.log(crr);
            let y = crr.shift();
            console.log(crr);
            console.log("deleted ", y);
            //slice
            let frr = ["a", "b", "c", "d", "e"];
            let z = frr.slice(0, 3);
            console.log(z); //[ 'a', 'b', 'c' ]
            let w = frr.slice(1);
            console.log(w); //[ 'b', 'c', 'd', 'e' ]
            // also can be used to make copy of array slice()
            // splice
            let grr = [0, 1, 2, 3, 4, 5, 6, 7, 8];
            let hrr = grr.splice(2, 2); // returns deleted items
            console.log(`hrr ${hrr}`); //[ 2, 3 ]
            console.log(grr); //[0, 1, 4, 5,6, 7, 8]
            //we can delete and insert at the same time
            grr.splice(0, 2, 9999, 9999);
            // parameter: start index, how many will be deleted , new element
            console.log(grr); //[9999, 9999,4,5,6, 7,8]
            //we can also add without deleting
            grr.splice(0, 0, 1111, 11111);
            console.log(grr); //[1111,11111,9999,9999,4,5,6,7,8]
            grr.splice(2); // deletes all the item from 2 index
            console.log(grr); //[ 1111, 11111 ]
            grr.splice(); //deletes nothing ,and copies
          }
        }
      }
    }
  }
}

// hudai block banaia rakhlam