<?php

$a = 2;
if ($a == 2) {
    echo "a vale 2\n";
} else {
    echo "a es distinto de 2\n";
}


$nombre = "Ana";
$edad = 28;
$ciudad = "Colombia";

if ($nombre == "Ana" && $edad == 28 && $ciudad == "Colombia") {
    echo "Su nombre es Ana, tiene 28 años y es de Colombia\n";
} elseif ($nombre == "Ana" && $edad != 28) {
    echo "Su nombre es Ana y no tiene 28 años\n";
} elseif ($nombre != "Ana" && $edad == 28) {      
    echo "Su nombre no es Ana y tiene 28 años\n";
} else {
    echo "No se llama Ana ni tiene 28 años\n";
}
?>
