import psycopg2

try:
    #establecer connexion con la base de datos
    conn = psycopg2.connect(
        host = "localhost",
        user = "postgres",
        password = "123.abz",
        database = "postgres",
        port = 5432
    )
    
    print(conn)
    print("✅ conexion exitosa")
    print(type(conn))
    #crear un cursor para ejecutar consultas
    cursor = conn.cursor()
    
    #listar todas las bases de datos disponibles
    cursor.execute("SELECT datname FROM pg_database;")
    print("bases de datos disponibles:")
    for db in cursor:
        print(db)
    
    #crear una nueva base de datos
    cursor.execute("CREATE DATABASE mi_primera_bd;")
    print("✅ base de datos creada")
except psycopg2.Error as err:
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
        
