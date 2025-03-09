import java.util.Scanner;

public class condicionales {
    public static void main(String[] args) {
        System.out.println("seleccione la opcion que desea realizar: ");
        System.out.println("1. Sumar dos numeros");
        System.out.println("2. Restar dos numeros");
        System.out.println("3. Multiplicar dos numeros");
        System.out.println("4. Dividir dos numeros");
        System.out.println("5. Salir");
        Scanner entrada = new Scanner(System.in);   
        int opcion = entrada.nextInt(); 
        switch (opcion) {
            case 1:
                System.out.println("ingrese el primer numero: ");
                int num1 = entrada.nextInt();
                System.out.println("ingrese el segundo numero: ");
                int num2 = entrada.nextInt();
                int suma = num1 + num2;
                System.out.println("la suma de los dos numeros es: " + suma);
                break;
            case 2:
                System.out.println("ingrese el primer numero: ");
                int num3 = entrada.nextInt();
                System.out.println("ingrese el segundo numero: ");
                int num4 = entrada.nextInt();
                int resta = num3 - num4;
                System.out.println("la resta de los dos numeros es: " + resta);
                break;
            case 3:
                System.out.println("ingrese el primer numero: ");
                int num5 = entrada.nextInt();
                System.out.println("ingrese el segundo numero: ");
                int num6 = entrada.nextInt();
                int multiplicacion = num5 * num6;
                System.out.println("la multiplicacion de los dos numeros es: " + multiplicacion);
                break;
            case 4:
                System.out.println("ingrese el primer numero: ");
                int num7 = entrada.nextInt();
                System.out.println("ingrese el segundo numero: ");
                int num8 = entrada.nextInt();
                int division = num7 / num8;
                System.out.println("la division de los dos numeros es: " + division);
                break;
            default:
                System.out.println("opcion no valida");
                break;
        }
    }
    
}
