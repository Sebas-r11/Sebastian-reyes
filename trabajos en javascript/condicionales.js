var prompt = require('prompt-sync')();

var figura = prompt("Ingrese la figura a calcular: cuadrado, triangulo o circulo: ");
var pi = 3.1416;


if (figura == "cuadrado") {
    var lado = prompt("Ingrese el lado del cuadrado");
    var area = lado * lado;
    console.log("El area del cuadrado es: " + area);
}
else if (figura == "triangulo") {
    var base = prompt("Ingrese la base del triangulo");
    var altura = prompt("Ingrese la altura del triangulo");
    var area = (base * altura) / 2;
    console.log("El area del triangulo es: " + area);
}
else if (figura == "circulo") {
    var radio = prompt("Ingrese el radio del circulo");
    var area = pi * radio * radio;
    console.log("El area del circulo es: " + area);
}
else {
    console.log("La figura ingresada no es valida");
}
