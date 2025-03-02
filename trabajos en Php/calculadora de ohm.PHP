<?php
$v = (int) readline("Ingrese el valor del voltaje del circuito: ");
$r = (int)readline("Ingrese el valor de la resistencia del circuito: ");

if ($r != 0) {
    $i = $v / $r;
    echo "Al conectar un resistor R $r ohm a una fuente de V $v voltios, circulará una corriente de $i Amperios.\n";
} else {
    echo "Error: La resistencia no puede ser cero.\n";
}
?>
