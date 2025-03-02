var prompt = require('prompt-sync')();

let a =prompt("ingrese la variable a: ");
let b =prompt("ingrese la variable b: ");
let mult = (a*b);
let div = (a/b);
let porc = (a%b);
let suma = (a+b);
let resta = (a-b);
let pot = (a**b);

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: *");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",mult);
console.log(typeof(mult));

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: /");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",div);
console.log(typeof(div));

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: +");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",suma);
console.log(typeof(suma));

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: -");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",resta);
console.log(typeof(resta));

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: **");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",pot);
console.log(typeof(pot));

console.log("la primera variable es: ",a);
console.log("el signo de la operacion es: %");
console.log("la segunda variable es: ",b);
console.log("el resultado de la operacion es: ",porc);
console.log(typeof(porc));