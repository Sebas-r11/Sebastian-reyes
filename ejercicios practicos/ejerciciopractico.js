const { MongoClient } = require('mongodb');

//conexión a MongoDB
const uri = 'mongodb://localhost:27017'; 

const client = new MongoClient(uri);

async function crearBaseDeDatos() {
  try {
    await client.connect();
    console.log('Conectado a MongoDB');

    const dbName = 'escuela'; // crea db
    const db = client.db(dbName); 

    db.createCollection("estudiantes"); // crea colección
    console.log('Base de datos y colección creados exitosamente');

    db.estudiantes.insertMany([
        { nombre: "Ana", edad: 19, curso: "Matemáticas", nota: 8.5 },
        { nombre: "Luis", edad: 20, curso: "Física", nota: 7.2 },
        { nombre: "Sofía", edad: 18, curso: "Química", nota: 9.0 },
        { nombre: "Pedro", edad: 21, curso: "Matemáticas", nota: 6.8 },
        { nombre: "María", edad: 20, curso: "Física", nota: 8.0 }
      ])
        console.log('Documentos insertados exitosamente');

        db.estudiantes.find({ nota: { $gt: 8 } })
        console.log('Consulta realizada exitosamente');

        db.estudiantes.find({ edad: 20 })
        console.log('Consulta realizada exitosamente');

        db.estudiantes.updateOne(
            { nombre: "Ana" },
            { $set: { nota: 9.5 } }
          )
        console.log('Documento actualizado exitosamente');

        db.estudiantes.updateMany(
            {},
            { $inc: { edad: 1 } }
          )
        console.log('Documentos actualizados exitosamente');

        db.estudiantes.find({
            nota: { $gte: 7, $lte: 9 },
            edad: { $lt: 22 }
          })
        console.log('Consulta realizada exitosamente');

        db.estudiantes.aggregate([
            { $group: { _id: null, promedio: { $avg: "$nota" } } }
          ])
        console.log('Consulta realizada exitosamente');

        db.estudiantes.aggregate([
            { $group: { _id: null, promedio: { $avg: "$nota" } } }
          ])
        console.log('Consulta realizada exitosamente');

        db.estudiantes.aggregate([
            { $group: { _id: "$curso", promedio: { $avg: "$nota" } } }
          ])
        console.log('Consulta realizada exitosamente');

        db.estudiantes.createIndex({ curso: 1 })
        console.log('Índice creado exitosamente');

        db.estudiantes.find({ curso: "Matemáticas" })
        console.log('Consulta usnado el indice realizada exitosamente');

        db.estudiantes.deleteMany({ nota: { $lt: 6 } })
        console.log('Documentos eliminados exitosamente');

        db.createCollection("cursos")
        db.cursos.insertMany([
            { nombre: "Matemáticas", estudiantes: ["Ana", "Pedro"] },
            { nombre: "Física", estudiantes: ["Luis", "María"] },
            { nombre: "Química", estudiantes: ["Sofía"] }
          ])
        console.log('Colección creada exitosamente');

        db.cursos.find({ estudiantes: "Ana" })
        console.log('Consulta realizada exitosamente');
        


 
  } catch (error) {
    console.error('Error al conectar o crear la base de datos:', error);
  } finally {
    await client.close();
    console.log('Conexión cerrada');
  }
}

crearBaseDeDatos();