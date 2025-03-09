import java.util.Scanner;
public class leyohm {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("ingrese el valor del voltaje del circuito: ");
        int v = scanner.nextInt();
        System.out.println("ingrese el valor de la resistencia del circuito: ");
        int r = scanner.nextInt();
        int i = v/r;
        System.out.println("al conectar un resistor de " + r + " ohmios a una fuente de " + v + " voltios, la corriente que circula por el circuito es de " + i + " amperios");
    }
    
}
