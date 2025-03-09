import mysql.connector

# conectar a 
conn = mysql.connector.connect(
    host = "localhost",
    user = "root",
    password = ""
)

#crear la bd
cursor = conn.cursor()

cursor.execute("CREATE DATABASE IF NOT EXISTS MyEcommerce1")

#conectar a la base de datos creada
conn.database = "MyEcommerce1"

#crear la tabla
tables = {
    "clientes": """
        CREATE TABLE IF NOT EXISTS clientes(
            id INT AUTO_INCREMENT PRIMARY KEY,
            nombre VARCHAR(50) NOT NULL,
            apellido VARCHAR(50) NOT NULL,
            email VARCHAR(50) NOT NULL,
            telefono VARCHAR(50) NOT NULL,
            direccion VARCHAR(50) NOT NULL,
        )
    """,
    "productos": """
        CREATE TABLE IF NOT EXISTS productos
            ID INT AUTO_INCREMENT PRIMARY KEY,
            nombre VARCHAR(50) NOT NULL,
            precio DECIMAL(10,2) NOT NULL,
            descripcion TEXT NOT NULL,
            imagen VARCHAR(50) NOT NULL,
        )
    """,
    "pedidos": """
    CREATE TABLE IF NOT EXISTS pedidos
        ID INT AUTO_INCREMENT PRIMARY KEY,
        cliente_id INT NOT NULL,
        producto_id INT NOT NULL,
        cantidad INT NOT NULL,
        fecha DATE NOT NULL,
        FOREIGN KEY (cliente_id) REFERENCES clientes(id),
        FOREIGN KEY (producto_id) REFERENCES productos(id),
    )
    """
}
for name, query in tables.items():
    cursor.execute(query)
    print(f"Tabla {name} creada correctamente")
    
cursor.close()
conn.close()
