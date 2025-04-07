#include <iostream>
#include <mongocxx/client.hpp>
#include <mongocxx/stdx.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include "MongoDBConnection.h"

using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::open_document;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::finalize;

int main() {
    MongoDBConnection connection;
    auto database = connection.getDatabase();
    auto collection = database["dos"];

    // Crear una tarea
    auto task = document{} << "title" << "Aprender MongoDB" << "completed" << false << finalize;
    auto result = collection.insert_one(task.view());

    std::cout << "Tarea creada con ID: " << result->inserted_id().get_oid().value.to_string() << std::endl;

    // Leer una tarea
    auto query = document{} << "title" << "Aprender MongoDB" << finalize;
    auto task_result = collection.find_one(query.view());

    if (task_result) {
        std::cout << "Tarea encontrada: " << bsoncxx::to_json(task_result->view()) << std::endl;
    }

    // Actualizar una tarea
    auto update = document{} << "$set" << open_document << "completed" << true << close_document << finalize;
    collection.update_one(query.view(), update.view());
    std::cout << "Tarea actualizada." << std::endl;

    // Eliminar una tarea
    collection.delete_one(query.view());
    std::cout << "Tarea eliminada." << std::endl;

    return 0;

}
