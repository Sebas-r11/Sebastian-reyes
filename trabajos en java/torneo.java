    import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class torneo {

    private List<String> equipos;
    private Scanner scanner;

    public torneo(List<String> equipos) {
        this.equipos = equipos;
        this.scanner = new Scanner(System.in);
    }

    public String simularTorneo() {
        List<String> participantes = new ArrayList<>(equipos);

        while (participantes.size() > 1) {
            List<String> ganadores = new ArrayList<>();
            for (int i = 0; i < participantes.size(); i += 2) {
                if (i + 1 < participantes.size()) {
                    String equipo1 = participantes.get(i);
                    String equipo2 = participantes.get(i + 1);
                    mostrarEquipos(equipo1, equipo2); // Mostrar equipos antes del partido
                    String ganador = simularEnfrentamiento(equipo1, equipo2);
                    ganadores.add(ganador);
                } else {
                    ganadores.add(participantes.get(i)); // Un solo equipo en la ronda
                }
            }
            participantes = ganadores;
        }

        return participantes.get(0); // El único equipo restante es el ganador
    }

    private void mostrarEquipos(String equipo1, String equipo2) {
        System.out.println("\nPróximo partido: " + equipo1 + " vs " + equipo2);
    }

    private String simularEnfrentamiento(String equipo1, String equipo2) {
        System.out.print("Ingrese el marcador para " + equipo1 + ": ");
        int marcador1 = scanner.nextInt();
        System.out.print("Ingrese el marcador para " + equipo2 + ": ");
        int marcador2 = scanner.nextInt();

        if (marcador1 > marcador2) {
            return equipo1;
        } else if (marcador2 > marcador1) {
            return equipo2;
        } else {
            System.out.println("Empate. Se definirá por sorteo.");
            return Math.random() < 0.5 ? equipo1 : equipo2; // Sorteo
        }
    }

    public static void main(String[] args) {
        List<String> equipos = new ArrayList<>();
        equipos.add("Colombia");
        equipos.add("Ecuador");
        equipos.add("Perú");
        equipos.add("Brasil");  
        equipos.add("Argentina");
        equipos.add("Uruguay");
        equipos.add("Chile");
        equipos.add("Paraguay");
        equipos.add("Venezuela");
        equipos.add("Bolivia");
        equipos.add("Panamá");
        equipos.add("Costa Rica");
        equipos.add("Honduras");
        equipos.add("México");
        equipos.add("Guatemala");
        equipos.add("El Salvador");

        torneo torneo = new torneo(equipos);
        String ganador = torneo.simularTorneo();

        System.out.println("\nEl ganador del torneo es: " + ganador);
    }
}
    

