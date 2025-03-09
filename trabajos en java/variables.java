import java.util.Scanner;

public class variables {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("introduce un numero");
        int a = scanner.nextInt();
        System.out.println("introduce otro numero");
        int b = scanner.nextInt();

        System.out.println("la suma de los numeros es: " + (a + b));
        System.out.println("la resta de los numeros es: " + (a - b));
        System.out.println("la multiplicacion de los numeros es: " + (a * b));
        System.out.println("la division de los numeros es: " + (a / b));
        System.out.println("el residuo de los numeros es: " + (a % b));
        System.out.println("la potencia de los numeros es: " + Math.pow(a, b));
    System.out.println(a);


    }
}