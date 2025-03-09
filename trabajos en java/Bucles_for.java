import java.util.ArrayList;
import java.util.HashMap;

public class Bucles_for {
    public static void main(String[] args){

        String[] nombres = {"camilo","juan","pedro","luis"};
        
        for (String nombre : nombres ){
            System.out.println(nombre);
        }

        ArrayList<HashMap<String, Object>> personas = new ArrayList<>();
        
        HashMap<String, Object> a = new HashMap<>();
        a.put("nombre", "camilo");
        a.put("edad", 23);

        HashMap<String, Object> b = new HashMap<>();
        b.put("nombre", "juan");
        b.put("edad", 24);

        HashMap<String, Object> c = new HashMap<>();
        c.put("nombre", "pedro");
        c.put("edad", 25);

        HashMap<String, Object> d = new HashMap<>();
        d.put("nombre", "luis");
        d.put("edad", 26);



        personas.add(a);
        personas.add(b);
        personas.add(c);
        personas.add(d);

        for (HashMap<String, Object> persona : personas){
            System.out.println(persona.get("nombre") + " " + persona.get("edad"));
        }
            int sumaEdades = 0;
            
            for (HashMap<String, Object> persona : personas){
                sumaEdades += (int) persona.get("edad");
            }
            System.out.println("La suma de las edades es: " + sumaEdades);
        }
    }

