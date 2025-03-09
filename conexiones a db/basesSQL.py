import mysql.connector

try:
    #establecer connexion con la base de datos
    conn = mysql.connector.connect(
        host = "localhost",
        user = "root",
        password = "",
        database = "mydbsql",
    )
    
    print(conn)
    print("✅ conexion exitosa")
    print(type(conn))
    #crear un cursor para ejecutar consultas
    cursor = conn.cursor()
    
    #listar todas las bases de datos disponibles
    cursor.execute("SHOW DATABASES;")
    for db in cursor:
        print(db)
    
    #crear una nueva base de datos
    cursor.execute("CREATE DATABASE mi_primera_bd;")
    print("✅ base de datos creada")
except mysql.connector as err:
    print(f"Error al conectar con la base de datos: {err}")
    
finally:
    #verificar si el cursor existe antes de cerrarlo
    if 'cursor' in locals() and cursor:
        cursor.close()
        print("✅ cursor cerrado")
    #verificar si la connexion existe antes de cerrarla
    if conn in locals() and conn:
        conn.close()
        print("✅ connexion cerrada")
        