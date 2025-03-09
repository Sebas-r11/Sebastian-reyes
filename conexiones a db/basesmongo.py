import pymongo

try:

    client = pymongo.MongoClient("mongodb://localhost:27017/")  
    print("Connected successfully!!!")
    
    print(f"👁‍🗨 tipo de objeto de conexion: {type(client)}")
    print(f"👁‍🗨 nombre de la base de datos: {client.list_database_names()}")
    
    mibasededatos = client["mydatabase"]
    
    micoleccion = mibasededatos["mycollection"]
    
    documento = {"name": "Peter", "address": "Lowstreet 27"}
    
    resultado = micoleccion.insert_one(documento)

    print(f"👁‍🗨 documento insertado: {resultado.inserted_id}")
    
except Exception as e:
    print("❌ error:", e)

finally:

    client.close()
    print("🔌 conexion cerrada")
