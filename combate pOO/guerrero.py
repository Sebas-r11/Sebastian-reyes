from personaje import personaje

class Guerrero(personaje):
    def __init__(self, nombre, salud):
        super().__init__(nombre, salud)
        self.ataque = None

    def equipar_arma(self, arma):
        self.ataque = arma
        print(f"{self.nombre} ha equipado el arma {arma.nombre}.")
        
    def atacar(self, objetivo):
        if self.arma:
            print(f"{self.nombre} ataca a {objetivo.nombre} con el arma {self.arma.nombre}.")
            objetivo.recibir_danio(self.arma.danio)
        else:
            print(f"{self.nombre} no tiene un arma equipada.")