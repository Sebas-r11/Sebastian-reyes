<?php

// 1. Función que calcula el cuadrado de un número
function cuadrado($a) {
    return $a * $a;
}

$a = 5; // Definimos un valor para 'a'
$resultado = cuadrado($a); // Llamamos a la función y guardamos el resultado
echo "$resultado\n"; // Mostramos el resultado (25, ya que 5 * 5 = 25)


// 2. Función que multiplica cada elemento de una lista por 2
function multiplicar_lista($a) {
    foreach ($a as $index => $numero) {
        $a[$index] *= 2; // Multiplicamos cada elemento por 2
    }
    return $a; // Retornamos la lista modificada
}

$numeros = [1, 2, 3, 4, 5]; // Definimos una lista de números
$resultado = multiplicar_lista($numeros); // Llamamos a la función y guardamos el resultado
print_r($resultado); // Mostramos la lista modificada ([2, 4, 6, 8, 10])


// 3. Función que recibe dos números y devuelve si son o no iguales
function validar_numeros($a, $b) {
    return $a == $b;
}

// Simulamos la entrada del usuario
$a = 5; // Primer número
$b = 5; // Segundo número

// Llamamos a la función y guardamos el resultado
$resultado = validar_numeros($a, $b);

// Mostramos el resultado de la comparación
if ($resultado) {
    echo "Son iguales\n"; // Si son iguales
} else {
    echo "Son distintos\n"; // Si son distintos
}

?>