import java.util.Scanner;
public class bucles_while {
    public static void main(String[] args) {
        int contador=0;
        while(contador < 30 ){
            contador++;
            System.out.println(contador);
        }

        Scanner scanner =  new Scanner(System.in);
        while (true){
            System.out.println("Ingrese un valor mayor a 10: ");
            int a = scanner.nextInt();

            if(a > 10){
                System.out.println("El valor es mayor a 10");
            }else{
                System.out.println("El valor es menor a 10");
                break;
            }
        }
    }
}
