nombres=['Esteban','Hans','Jhon','Juan Pablo \n\n']
for nombre in nombres:
    print(nombre)
#Diccionarios
Personas=[]#lista vacia se llena con a y b
a={'nombre':'Esteban', 'Edad': 28}
b={'nombre':'Hans', 'Edad': 27}
c={'nombre':'Jhon', 'Edad': 41}
d={'nombre':'Juan Pablo', 'Edad': 23}
Personas.append(a)#append: permite que los datos se agregen a la lista vacia
Personas.append(b)
Personas.append(c)
Personas.append(d)
for persona in Personas:
    print(persona['nombre'], persona['Edad'])

#Operar con valores de diccionarios
