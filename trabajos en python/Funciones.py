a=(1,2,3,4,5,)
b=(6,7,8,9,10)
c=[]

for contador in range(len(a)):
    c.append(a[contador]*b[contador])
print(c)    


def mostrar_texto():
    print('hola')

mostrar_texto()

def multiplicar():
    a = 5
    b = 8
    print(a*b)
multiplicar()


def multiplicar():
    print(a*b)
a = 5
b = 8
multiplicar()

def multiplicar():
    a = 5
    b = 8
    return a * b
Resultado=multiplicar()
print(Resultado+5)

def validar_dato():
    if a==5:
        return True
    else:
        return False

a = 5
dato=validar_dato()
print(dato)



