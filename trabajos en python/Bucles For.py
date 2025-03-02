nombres=['Esteban','Hans','Jhon','Juan Pablo \n\n']
for nombre in nombres:
    print(nombre)
#Diccionarios
Personas=[]#lista vacia se llena con a y b
a={'nombre':'sebastian', 'Edad': 22}
b={'nombre':'andres', 'Edad': 22}
c={'nombre':'daniel', 'Edad': 18}
d={'nombre':'Juan Pablo', 'Edad': 23}
Personas.append(a)#append: permite que los datos se agregen a la lista vacia
Personas.append(b)
Personas.append(c)
Personas.append(d)
for persona in Personas:
    print(persona['nombre'], persona['Edad'])

#Operar con valores de diccionarios
