<?php
function obtenerResultados() {
    $resultados = array();
    
    // Asignar valores booleanos
    $A = true;
    $B = false;
    
    // Realizar operaciones lógicas
    $resultados[] = $A;              // true
    $resultados[] = $B;              // false
    $resultados[] = $A && $B;        // false
    $resultados[] = $A || $B;        // true
    
    return $resultados;
}

// Llamada a la función y mostrar resultados
$resultados = obtenerResultados();

foreach ($resultados as $resultado) {
    echo ($resultado ? 'true' : 'false') . "\n";
}
?>
