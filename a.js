/*alert("This is a simple JS program");
var name = prompt("What's your name");
var year = prompt("What's your acad year?");
var sclName = prompt("What'your school name?");
var interest =prompt("What's your area of interest?");
var num = prompt("What's your fave num?");

console.log("Hi everyone, I'm " + name + " and I'm a " + year + " student at " + sclName + " , I'm interest in "+ interest + " , and my favorite number is " + num)
*/

//var myName = "John";
//console.log(myName);

/* userName = "user";
pass = "pass";

if (userName == "user") {
    if (pass == "pass") {
        console.log("Login successful");
    }
    else {
        console.log("Login failed");
    }
}
else {
    console.log ("Login failed");
}





let shoppingDone = false;
let childAllowance;

if (shoppingDone == true) {
    childAllowance = 10;
    console.log("Your allowance is " + childAllowance)
} 
else {
    childAllowance = 0;
    console.log("Your allowance is " + childAllowance)
} 

console.log(childAllowance);
*/

/*

var a = 10;
var b = 3;
var answer;
var operation = "add";


if (operation == "add"){
    answer = a + b;
    console.log ("Result: " + answer);
    console.log("Increment: " + ++answer);
    console.log("Decrement: " + --answer);
}
else if (operation == "sub"){
    answer = a - b;
    console.log ("Result: " + answer);
    console.log("Increment: " + ++answer);
    console.log("Decrement: " + --answer);
}
else if (operation == "mul"){
    answer = a * b;
    console.log ("Result: " + answer);
    console.log("Increment: " + ++answer);
    console.log("Decrement: " + --answer);
}
else if (operation == "div"){
    if (a == 0 || b == 0) {
        console.log("Division by zero is not allowed");
    }
    else {
    answer = a / b;
    console.log ("Result: " + answer);
    console.log("Increment: " + ++answer);
    console.log("Decrement: " + --answer);
}
}
else if (operation == "mod"){
    answer = a % b;
    console.log ("Result: " + answer);
    console.log("Increment: " + ++answer);
    console.log("Decrement: " + --answer);
}

*/

/*
let shopping = ['bread', 'milk', 'cheese'];
shopping[0] = "tahini";
console.log(shopping[0]);

const data = [1, [2, 3], 4];
console.log(data[2]);


const birds = ["Parrot", "Falcon", "Owl"];
console.log(birds.indexOf("Owl" ));
console.log(birds.indexOf("Rabbit"));


const cities = ["Manchester", "Liverpool"];
cities.unshift("Cardiff");
console.log(cities);

const colors = ["red", "green", "blue", "yellow"];
const removedColor = colors.splice(2,2);
console.log(colors);
console.log(removedColor);

const data = "apple,banana,orange";
const fruits = data.split(',');
const  joinedString = fruits.join('-');
const stringArray = fruits.toString();
console.log(stringArray);


for (let i = 1; i <= 5; i++){
    console.log(i);
}



const fruits = ["apple", "banana", "orange"];
for (let i = 0; i < fruits.length; i++){
    console.log(fruits[i]);
}


const colors = ["Red", "Green", "Blue", "Yellow", "Stop"]
let index = 0;

while (colors[index] !== "Stop"){
    console.log(colors[index]);
    index++;
}





let number = 5;
let isPositive = false;

do {
    console.log("Checking", number);
    number++;
}
while (isPositive);

console.log("Loop stop, num no POS");



const s = "sorry";
for (let num = 1; num <= 100; num++){
    console.log("sorry " + num);
}
*/

let pc = [];
for (let i = 1; i <= 100; i++){
    pc.push("PC#" + i);
}
console.log(pc);



//print only odd numbers

let pc = [];
for (let i = 1; i <= 100; i++){
    if (i % 2 !== 0){
        pc.push("PC#" + i);
    }
}
console.log(pc);

