from pymongo import MongoClient

# Conexión a MongoDB
client = MongoClient('mongodb://localhost:27017/')
db = client['registroclientess']  
coleccion = db['clientes']       # Colección 'clientes'

# Insertar documentos 
datos_clientes = [
    {
        "nombre": "Juan Pérez",
        "ciudad": "Madrid",
        "compras": [120.000, 45.000, 75.000]
    },
    {
        "nombre": "María García",
        "ciudad": "Bogota",
        "compras": [89.000]
    },
    {
        "nombre": "Carlos López",
        "ciudad": "Madrid",
        "compras": [150.000, 220.000, 65.000, 90.000]
    }
]

# Insertar los documentos 
coleccion.insert_many(datos_clientes)

# Consulta: clientes con más de 2 compras
clientes_mas_de_2_compras = coleccion.find({
    "compras": {"$exists": True, "$gt": [{"$size": "$compras"}, 2]}
})




# Mostrar resultados
print("Clientes con más de 2 compras:")
for cliente in clientes_mas_de_2_compras:
    print(f"Nombre: {cliente['nombre']}")
    print(f"Ciudad: {cliente['ciudad']}")
    print(f"Número de compras: {len(cliente['compras'])}")
    print(f"Compras: {cliente['compras']}")
    print("-" * 30)

# Cerrar conexión
client.close()