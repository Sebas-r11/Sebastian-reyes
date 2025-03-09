import javax.swing.JOptionPane;
public class interaccionusuario {
    public static void main(String[] args) {
        String nombre = JOptionPane.showInputDialog("Escriba sus nombres completos: ");
        String apellido = JOptionPane.showInputDialog("Escribas sus Apellidos completos: ");
        String profesion = JOptionPane.showInputDialog("Escriba su profesion: ");
        int nacimiento = Integer.parseInt(JOptionPane.showInputDialog("Escriba su año de nacimiento: "));
        int edad = 2025 - nacimiento;
    
}
}