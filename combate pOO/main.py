from guerrero import Guerrero
from hechicero import hechicero 
from espada import espada
from conjuro import conjuro
# Crear personajes
guerrero = Guerrero (" Thorg", 50) 
hechicero = hechicero ("Merlin", 50)
# Crear objetos
espada = espada("Espada del Valor", 50) 
conjuro = conjuro(" Bola de Fuego", 30)
# Equipar objetos
guerrero. equipar_arma (espada) 
hechicero. aprender_conjuro (conjuro)
# Acciones del juego guerrero.atacar (hechicero) hechicero. lanzar__conjuro (guerrero )