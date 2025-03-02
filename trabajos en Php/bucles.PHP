<?php
function sumarNumeros() {
    $suma = 0;
    $i = 1;
    
    while ($i <= 10) {
        $suma += $i;
        $i++;
    }
    
    return $suma;
}

// Llamada a la función y mostrar resultado
$resultado = sumarNumeros();
echo "La suma de los números del 1 al 10 es: $resultado\n";
?>
