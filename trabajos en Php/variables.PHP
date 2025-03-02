<?php
// Función que calcula diferentes operaciones matemáticas
function calcularOperaciones($num1, $num2) {
    $resultados = array();
    
    // Suma
    $resultados['suma'] = $num1 + $num2;
    
    // Resta
    $resultados['resta'] = $num1 - $num2;
    
    // Multiplicación
    $resultados['multiplicacion'] = $num1 * $num2;
    
    // División
    if ($num2 != 0) {
        $resultados['division'] = $num1 / $num2;
    } else {
        $resultados['division'] = "Error: División por cero";
    }
    
    // Potenciación
    $resultados['potenciacion'] = pow($num1, $num2);
    
    return $resultados;
}

// Ejemplo de uso
$num1 = 5;
$num2 = 3;
$resultados = calcularOperaciones($num1, $num2);

foreach ($resultados as $operacion => $resultado) {
    echo "$operacion: $resultado\n";
}
?>
