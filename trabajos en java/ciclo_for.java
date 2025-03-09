import java.util.Scanner;

public class ciclo_for {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese un numero");
        int A = scanner.nextInt();

        System.out.println("Ingrese otro numero");
        int C = scanner.nextInt();

        int B=0;

        int valor = (int) Math.pow(A, C);

        System.out.println("La potencia de " + A + " elevado a " + C + " es: " + valor);

        scanner.close();
    }
}
