function sum(x, y) {
    return x + y;
  }
  
  // arrow func
  // const summation = (a,b) => {console.log(a+b);}
  // const summation2 = (a,b) => {(a+b);}
  // console.log(summation(1,2));  // O: 3
  // console.log(summation); //O:(a,b) => {console.log(a+b);}
  // console.log(summation2(1,2)); //O : nothing
  
  const sum2 = (a, b) => {
    return a + b;
  };
  const sum3 = (a, b) => a + b;
  const sum4 = (a, b) => {
    console.log(a + b);
  };
  // all are same but func name is a variable that stores the func
  
  ////////////////////////////////////////////////////////////////////////////////////////
  // MAPPING
  let L = [1, 2, 3, 4];
  function add_one(x) {
    return x + 1;
  }
  LL = L.map(add_one);
  console.log(LL);
  
  // FOREACH
  C = [1, 1, 1, 1, 1];
  C.forEach((v) => {
    console.log(v);
  });
  C.map((v) => {
    console.log(v + 1);
  });
  C.map((v) => v + 1);
  console.log(C);
  C.forEach((v) => v + 1); //[ 1, 1, 1, 1, 1 ]
  console.log(C); //[ 1, 1, 1, 1, 1 ]
  
  // The difference between forEach and map lies primarily in their purpose and the return value
  // The forEach method iterates over each element in an array and executes a callback function for each element. It does not return a new array; instead, it returns undefined. The primary use of forEach is to perform actions or operations on each element of the array without creating a new array.
  
  // CALLBACK FOREACH
  let S = [1, 2, 3, 4];
  function add_one(x) {
    return x + 1;
  }
  function callback(value, index, array) {
    array[index] = add_one(value);
  }
  S.forEach(callback);
  console.log(S); // Output: [2, 3, 4, 5]
  
  // ShortHand
  // Map
  A = [0, 1, 2, 3, 4];
  AA = A.map((x) => x + 1);
  console.log(AA);
  
  // FOREACH is a higher order func(recieve or retrn anoter func)
  B = [0, 1, 2, 3, 4, 5];
  B.forEach((v, i, arr) => {
    arr[i] = add_one(v);
  });
  
  D = ["hello", "I", "am", "saiful"];
  DD = D.map((str) => str.toUpperCase());
  console.log(DD);
  
  // FILTER
  F = [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14];
  FF = F.filter((x) => {
    return x % 2 === 0;
  });
  console.log(FF);
  
  // REDUCE
  let summm = F.reduce((res, curr) => {
    return res + curr;
  });
  let largee = F.reduce((prev, curr) => {
    return prev > curr ? prev : curr;
  });
  b