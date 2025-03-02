<?php



$nombres = ['Ana', 'Pablo', 'Diego', 'Carmen'];

$personas = [];
$a = ['nombre' => 'Ana', 'edad' => 28];
$b = ['nombre' => 'Pablo', 'edad' => 35];
$c = ['nombre' => 'Luis', 'edad' => 38];

array_push($personas, $a, $b, $c);

foreach ($personas as $persona) {
    echo $persona['nombre'] . "\n";
    echo $persona['edad'] . "\n";
    print_r($personas);
}


$lista_nombres = [];

foreach ($personas as $persona) {
    $lista_nombres[] = $persona['nombre'];
}
echo json_encode($lista_nombres) . "\n";


$numeros = [1, 2, 3, 4, 5];

foreach ($numeros as $index => $numero) {
    $numeros[$index] += 3;
}
print_r($numeros);
?>
