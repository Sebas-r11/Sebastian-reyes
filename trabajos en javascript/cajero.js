// Datos de usuario y clave
const usuarioCorrecto = "usuario123";
const claveCorrecta = "1234";

function iniciarSesion() {
  // Solicitar usuario y clave
  const usuario = prompt("Ingrese su usuario:");
  const clave = prompt("Ingrese su clave:");

  // Validar datos
  if (usuario === usuarioCorrecto && clave === claveCorrecta) {
    alert("Bienvenido al cajero automático.");

    // Simulación de operaciones
    let saldo = 1000; // Saldo inicial

    alert("Su saldo actual es: $" + saldo);

    const opcion = prompt(
      "Seleccione una operación:\n1. Retirar dinero\n2. Depositar dinero\n3. Consultar saldo"
    );

    if (opcion === "1") {
      const cantidad = parseFloat(prompt("Ingrese la cantidad a retirar:"));
      if (cantidad > 0 && cantidad <= saldo) {
        saldo -= cantidad;
        alert("Retiro exitoso. Su nuevo saldo es: $" + saldo);
      } else {
        alert("Cantidad inválida o insuficiente.");
      }
    } else if (opcion === "2") {
      const cantidad = parseFloat(prompt("Ingrese la cantidad a depositar:"));
      if (cantidad > 0) {
        saldo += cantidad;
        alert("Depósito exitoso. Su nuevo saldo es: $" + saldo);
      } else {
        alert("Cantidad inválida.");
      }
    } else if (opcion === "3") {
      alert("Su saldo actual es: $" + saldo);
    } else {
      alert("Opción inválida.");
    }
  } else {
    alert("Usuario o clave incorrectos.");
  }
}

// Iniciar sesión al cargar la página
iniciarSesion();