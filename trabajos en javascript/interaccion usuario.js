var prompt = require('prompt-sync')();

let name =prompt("ingrese su nombre: ")
let lastName =prompt("ingrese su apellido: ")
let prof =prompt("ingrese su profesion: ")
let birth =prompt ("ingrese su año de nacimiento: ")
let age = (2025-birth)
console.log("El (la) usuario se llama ", name, lastName, "es un (a) ", prof, "y su edad es de ", age)