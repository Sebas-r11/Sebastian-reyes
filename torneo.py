
equipos = ["Colombia", "Nicaragua", "Panama", "España",
           "Mexico", "Alemania", "Venezuela", "Chile",
           "Argentina", "Brazil", "Ecuador", "Japon",
           "Honduras", "Canada", "Francia", "Peru"]

# Función para simular un enfrentamiento entre dos equipos
def enfrentamiento(equipo1, equipo2):
    # indicamos los marcadores de cada equipo
    print ("usuari@ favor recuerde que estos partidos NO empatan")
    print (f"los equipos que se enfrentaran son: {equipo1} y {equipo2}")
    print (f"ingrese el marcador para equipo incluya penales {equipo1}")
    a = int(input())
    print (f"ingrese el marcador para equipo incluya penales {equipo2}")
    b = int(input())
    if a > b:
        ganador = equipo1
    else:
        ganador = equipo2

    print(f"{equipo1} vs {equipo2} -> Gana: {ganador}")
    return ganador

# Función para simular una ronda del torneo
def ronda(equipos):
    ganadores = []
    for i in range(0, len(equipos), 2):
        equipo1 = equipos[i]
        equipo2 = equipos[i + 1]
        ganador = enfrentamiento(equipo1, equipo2)
        ganadores.append(ganador)
    return ganadores

# Simulación del torneo
ronda_actual = equipos
ronda_numero = 1

while len(ronda_actual) > 1:
    print(f"\n--- Ronda {ronda_numero} ---")
    ronda_actual = ronda(ronda_actual)
    ronda_numero += 1

# El último equipo restante es el ganador del torneo
print(f"\n¡El ganador del torneo es {ronda_actual[0]}!")
print("el subcampeon es chile")
