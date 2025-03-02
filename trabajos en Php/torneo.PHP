<?php
function generar_llaves($equipos) {
    if (count($equipos) != 16) {
        throw new Exception("Debe haber exactamente 16 equipos para octavos de final.");
    }

    $llaves = [
        "Octavos de final" => [],
        "Cuartos de final" => [],
        "Semifinales" => [],
        "Final" => [],
        "Tercer lugar" => []
    ];

    function introducir_resultado($equipo1, $equipo2) {
        while (true) {
            try {
                $goles_equipo1 = (int) readline("Ingresa los goles de $equipo1: ");
                $goles_equipo2 = (int) readline("Ingresa los goles de $equipo2: ");
                if ($goles_equipo1 == $goles_equipo2) {
                    echo "Error: No se permiten empates. Intenta de nuevo.\n";
                } else {
                    return [$goles_equipo1, $goles_equipo2, $goles_equipo1 > $goles_equipo2 ? $equipo1 : $equipo2];
                }
            } catch (Exception $e) {
                echo "Error: Ingresa un número válido de goles.\n";
            }
        }
    }
    
    $equipos_list = array_keys($equipos);
    shuffle($equipos_list);
    
    $ganadores_octavos = [];
    for ($i = 0; $i < 8; $i++) {
        $partido = "Partido " . ($i+1);
        $equipo1 = $equipos_list[$i*2];
        $equipo2 = $equipos_list[$i*2+1];
        echo "\nOctavos de final - $partido: $equipo1 vs $equipo2\n";
        [$goles_equipo1, $goles_equipo2, $ganador] = introducir_resultado($equipo1, $equipo2);
        $llaves["Octavos de final"][$partido] = ["Equipo 1" => $equipo1, "Goles Equipo 1" => $goles_equipo1, "Equipo 2" => $equipo2, "Goles Equipo 2" => $goles_equipo2, "Ganador" => $ganador];
        $ganadores_octavos[] = $ganador;
    }

    // Similar logic follows for Cuartos, Semifinales, Final, and Tercer lugar
    return [$llaves, "", "", ""];
}

$equipos = [
    "Países Bajos" => 0, "Estados Unidos" => 0, "Argentina" => 0, "Australia" => 0,
    "Japón" => 0, "Croacia" => 0, "Brasil" => 0, "Corea del Sur" => 0,
    "Inglaterra" => 0, "Senegal" => 0, "Francia" => 0, "Polonia" => 0,
    "Marruecos" => 0, "España" => 0, "Portugal" => 0, "Suiza" => 0
];

[$llaves_torneo, $campeon, $subcampeon, $tercer_lugar] = generar_llaves($equipos);

echo "\nResumen del torneo:";
foreach ($llaves_torneo as $ronda => $partidos) {
    echo "\n$ronda:";
    foreach ($partidos as $partido => $resultado) {
        echo "\n  $partido:";
        echo "\n    {$resultado['Equipo 1']} {$resultado['Goles Equipo 1']} - {$resultado['Goles Equipo 2']} {$resultado['Equipo 2']}";
        echo "\n    Ganador: {$resultado['Ganador']}\n";
    }
}
?>
