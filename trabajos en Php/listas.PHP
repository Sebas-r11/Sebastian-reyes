<?php

$a = [1, 2, 3, 4];
print_r($a);

// Podemos acceder a los valores

echo $a[0] . "\n";

echo implode(", ", array_slice($a, 0, 2)) . "\n";

// Podemos modificar los valores
$b = [5, 6];

print_r(array_merge($a, $b));

// Podemos añadir valores
$a[3] = 'Hola';
print_r($a);

// Eliminar un valor
array_push($a, 3);
print_r($a);


echo count($a) . "\n";

//Mostrar los valores sin array
echo (in_array(5, $a) ? 'true' : 'false') . "\n";
echo (in_array(1, $a) ? 'true' : 'false') . "\n";

?>
