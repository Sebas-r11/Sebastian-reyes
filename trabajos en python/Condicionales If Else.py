a=2
if a ==2:
    print('a vale 2')
else:
    print('a es diferente de 2')

#Concatenar condiciones 

Nombre = 'sebastian'
Edad = 22
Pais='Colombia'

if Nombre =='sebastian' and Edad == 22 and Pais =='Colombia':
    print('Su nombre es', Nombre,'tiene',Edad,'y es de',Pais) 
elif Nombre == 'Esteban'and not Edad==28:
    print('Su nombre es sebastian y no tiene 22 años')
elif Nombre != 'sebastian'and Edad == 22:
    print('Su nombre no es sebastian y tiene 22 años')
else:
    print('No se llama sebastian ni tiene 22 años')         
