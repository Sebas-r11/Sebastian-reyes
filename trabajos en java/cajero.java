import java.util.Scanner;

public class cajero{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String usuario = "usuario"; // Usuario predefinido
        String clave = "clave"; // Clave predefinida
        int saldo = 1000; // Saldo inicial

        System.out.println("Bienvenido al cajero automático");

        // Solicitar usuario y clave
        // el usuario es usuario y la clave es clave, si no es asi, no se puede ingresar
        System.out.print("Ingrese su usuario: ");
        String usuarioIngresado = scanner.nextLine();
        System.out.print("Ingrese su clave: ");
        String claveIngresada = scanner.nextLine();

        // Verificar usuario y clave
        if (usuarioIngresado.equals(usuario) && claveIngresada.equals(clave)) {
            System.out.println("Acceso concedido.");

            while (true) {
                System.out.println("\n1. Consultar saldo");
                System.out.println("2. Retirar dinero");
                System.out.println("3. Depositar dinero");
                System.out.println("4. Salir");
                System.out.print("Ingrese una opción: ");

                int opcion = scanner.nextInt();

                switch (opcion) {
                    case 1:
                        System.out.println("Su saldo es: $" + saldo);
                        break;
                    case 2:
                        System.out.print("Ingrese la cantidad a retirar: ");
                        int retiro = scanner.nextInt();
                        if (retiro <= saldo) {
                            saldo -= retiro;
                            System.out.println("Retiro exitoso.");
                        } else {
                            System.out.println("Saldo insuficiente.");
                        }
                        break;
                    case 3:
                        System.out.print("Ingrese la cantidad a depositar: ");
                        int deposito = scanner.nextInt();
                        saldo += deposito;
                        System.out.println("Depósito exitoso.");
                        break;
                    case 4:
                        System.out.println("Gracias por usar el cajero automático.");
                        return;
                    default:
                        System.out.println("Opción inválida.");
                }
            }
        } else {
            System.out.println("Usuario o clave incorrectos.");
        }
    }
}