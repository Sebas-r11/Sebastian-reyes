
var prompt = require('prompt-sync')();

function simularPartido(equipo1, equipo2) {
    
    var golesEquipo1 =prompt("ingrese el marcaddor del equipo 1: "); 
    var golesEquipo2 =prompt("ingrese el marcaddor del equipo 2: ");
  
    if (golesEquipo1 > golesEquipo2) {
      return equipo1;
    } else if (golesEquipo2 > golesEquipo1) {
      return equipo2;
    } else {
     //penales
      return Math.random() < 0.5 ? equipo1 : equipo2;
    }
  }
  
  function simularEliminatoria(equipos, ronda) {
    const ganadores = [];
    console.log(`\n--- Ronda ${ronda} ---`);
    for (let i = 0; i < equipos.length; i += 2) {
      const equipo1 = equipos[i];
      const equipo2 = equipos[i + 1];
      console.log(`${equipo1} vs ${equipo2}`);
      const ganador = simularPartido(equipo1, equipo2);
      ganadores.push(ganador);
    }
    return ganadores;
  }
  
  function simularTorneo(equipos) {
    let ronda = 1;
    while (equipos.length > 1) {
      equipos = simularEliminatoria(equipos, ronda);
      ronda++;
    }
    return equipos[0]; //ganador
  }
  
  
  const equipos = ["Colombia", "Brasil", "Argentina", "Alemania", "Francia", "Inglaterra", "Portugal", "Espana", "Uruguay", "Mexico", "Ecuador", "Peru", "Chile", "Paraguay", "Venezuela", "Bolivia"];
  const ganador = simularTorneo(equipos);
  console.log("\nEl ganador del torneo es:", ganador);