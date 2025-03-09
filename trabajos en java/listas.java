import java.util.Arrays;
import java.util.List;
public class listas {
    public static void main(String[] args) {
        
                // Crear un array de cadenas
                String[] arrayCadenas = {"lunes", "martes", "Jueves", "viernes", "sábado", "domingo"};
        
                // Crear una lista a partir del array
                List<String> listaDesdeArray = Arrays.asList(arrayCadenas);
        
                // Imprimir la lista
                System.out.println(listaDesdeArray);
                System.out.println("Tamaño de la lista: " + listaDesdeArray.size());
                System.out.println("Elemento en la posición 4: " + listaDesdeArray.get(3));
                System.out.println("Elementos del 1 al 3: " + listaDesdeArray.subList(0, 2));
                System.out.println("elemento 1 y del 3 al 5: " + listaDesdeArray.subList(0, 1) + " " + listaDesdeArray.subList(2, 4));
        

    }

    
}
