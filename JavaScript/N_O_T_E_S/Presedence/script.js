// console.dir(document.body.childNodes[1].childNodes[1]);
document.body.style.backgroundColor = "black";
// Inline styles added via JavaScript (e.g., document.body.style.backgroundColor = "black";) have higher specificity and thus override styles defined in external stylesheets.



// The reason 0.2 + 0.1 equals 0.30000000000000004 in JavaScript (and many other programming languages) is due to the way floating-point arithmetic works in computers. JavaScript uses a standard called IEEE 754 for representing floating-point numbers, which can introduce precision errors.

// Here's a more detailed explanation:

// Floating-Point Representation
// Binary Representation:

// Computers represent numbers in binary (base-2).
// Some decimal numbers (base-10) cannot be represented exactly in binary. For example, 0.2 and 0.1 are repeating fractions in binary.
// Precision Limits:

// IEEE 754 standard represents floating-point numbers with a finite number of bits. In JavaScript, this is typically a double-precision 64-bit binary format.
// Due to limited precision, rounding errors occur when performing arithmetic operations.
// Example in Binary
// 0.2 in binary (approximate): 0.0011001100110011001100110011001100110011001100110011...
// 0.1 in binary (approximate): 0.0001100110011001100110011001100110011001100110011001...
// When you add these two numbers, the result is not exactly 0.3 in binary but something very close to it. Due to the finite precision, the closest representation ends up being 0.30000000000000004.