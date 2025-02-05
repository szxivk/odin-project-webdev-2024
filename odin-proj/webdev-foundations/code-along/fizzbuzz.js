const prompt = require("prompt-sync")({ sigint: true });

// Ask user for a Number
const num = Number(prompt("Enter Number: "));
// loop from 1 to that Number
for (let i = 1; i <= num; i++) {
  // for numbers that are divisible by both print fizzbuzz
  if (i % 3 === 0 && i % 5 === 0) {
    console.log("FizzBuzz");
    // for numbers divisible by 3 print fizz
  } else if (i % 3 === 0) {
    console.log("Fizz");
    // for numbers divisible by 5 print buzz
  } else if (i % 5 === 0) {
    console.log("Buzz");
  } else {
    console.log(i);
  }
}

// end
