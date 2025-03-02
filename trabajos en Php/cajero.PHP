<?php
class Usuario {
    public $nombre;
    public $pin;
    public $saldo;

    public function __construct($nombre, $pin, $saldo) {
        $this->nombre = $nombre;
        $this->pin = $pin;
        $this->saldo = $saldo;
    }
}

class Banco {
    private $usuarios;

    public function __construct($usuarios = []) {
        $this->usuarios = $usuarios;
    }

    public function autenticar($nombre, $pin) {
        foreach ($this->usuarios as $usuario) {
            if ($usuario->nombre == $nombre) {
                if ($usuario->pin == $pin) {
                    echo "Estas logueado\n";
                    return true;
                } else {
                    echo "Pin incorrecto\n";
                    return false;
                }
            }
        }
        echo "El usuario no existe\n";
        return false;
    }

    public function sacar_dinero($nombre, $saldo) {
        foreach ($this->usuarios as $usuario) {
            if ($usuario->nombre == $nombre) {
                if ($usuario->saldo < $saldo) {
                    echo "Saldo insuficiente\n";
                    break;
                } else {
                    $usuario->saldo -= $saldo;
                    echo "El saldo disponible es " . $usuario->saldo . "\n";
                }
            }
        }
    }
}

$ana = new Usuario("Ana", 9873, 500);
$pablo = new Usuario("Pablo", 5555, 600);
$rodrigo = new Usuario("Rodrigo", 2222, 300);

$Banco = new Banco([$ana, $pablo, $rodrigo]);

while (true) {
    echo "Bienvenido al banco, identifíquese por favor\n";
    echo "Introduzca su nombre: ";
    $nombre = trim(fgets(STDIN));
    echo "Introduzca el pin: ";
    $pin = (int) trim(fgets(STDIN));

    if ($Banco->autenticar($nombre, $pin)) {
        while (true) {
            echo "Por favor, elija una de las opciones \n1. Retirar dinero \n2. Terminar sesión\n";
            $opcion = trim(fgets(STDIN));

            if ($opcion == "1") {
                echo "Introduce cantidad a sacar: ";
                $saldo = (int) trim(fgets(STDIN));
                $Banco->sacar_dinero($nombre, $saldo);
            } elseif ($opcion == "2") {
                echo "Cerrando sesión\n";
                break;
            } else {
                echo "Opción incorrecta, por favor introduzca una opción válida\n";
            }
        }
    } else {
        echo "Usuario no autenticado, por favor introduzca un nombre y pin válidos\n";
    }
}
?>
