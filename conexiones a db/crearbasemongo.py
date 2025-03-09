from pymongo import MongoClient
import pymongo

#concetar a 

client = pymongo.MongoClient("mongodb://localhost:27017/")  
db = client["MyEcommerce1"]

#crear colecciones
#db.create_collection("clientes")
clientes = db["clientes"]
productos = db["productos"]
ventas = db["ventas"]
compras = db["compras"]
compras = db["comercio1"]

# insertar documentos
clientes.insert_one({"nombre": "Juan", "apellido": "Perez", "email": "juanperez@gmail.com", "telefono": "123456789", "direccion": "Calle 123"})
productos.insert_one({"nombre": "laptop", "descripcion": "laptop marca lenovo", "precio": 1000, "stock": 10})
print("✅ Documentos insertados correctamente")