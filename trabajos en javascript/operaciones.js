var prompt = require('prompt-sync')();

var a = prompt("ingrese un numero: ")
var b = prompt("ingrese otro numero: ")

console.log(a)
console.log(b)
console.log("la suma de los numeros es: ",(a+b))
console.log("la resta de los numeros es: ",(a-b))
console.log("la multiplicacion de los numeros es: ",(a*b))
console.log("la division de los numeros es: ",(a/b))
console.log("la igualdad de los numeros es: ",(a==b))
console.log("el numero a es mayor que el numero b: ",(a>b))
console.log("el numero b es mayor que el numero a: ",(b>a))

