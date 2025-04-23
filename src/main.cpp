#include <iostream>
#include <set>

int main() {

  // Flush after every std::cout / std:cerr
  // Activa el modo "unitbuf" (unbuffered) para el stdout y stderr
  // Imprimirá inmediatamente sin esperar a que el bufer se llene (no hay que poner endl)
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Declaro un array con los comandos validos
  std::set<std::string> valid_commands = {"test", "prueba", "ro"};

  // Creo un REPL (Read-Evaluate-Print-Loop)
  while (true){

      // # Read
      std::cout << "$ ";

      // Declaro la variable "input" que será una string
      std::string input;
      // Guardo lo que ingrese el usuario en "input"
      std::getline(std::cin, input);

      // # Evaluate and Print

      if (valid_commands.count(input)) {
        std::cout << "Comando reconocido: " << input << "\n";
      } else {
          // No finalizo con endl porque tenemos el modo ubitbuf activado, solo hago un salto de línea
          std::cout << input << ": command not found\n";
      };

  };

}