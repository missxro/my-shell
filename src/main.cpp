#include <iostream>
#include <set>

using namespace std;

int main() {

  // Flush after every cout / std:cerr
  // Activa el modo "unitbuf" (unbuffered) para el stdout y stderr
  // Imprimirá inmediatamente sin esperar a que el bufer se llene (no hay que poner endl)
  cout << unitbuf;
  cerr << unitbuf;

  // Declaro un array con los comandos validos
  set<string> valid_commands = {"test", "prueba", "ro"};

  // Creo un REPL (Read-Evaluate-Print-Loop)
  while (true){

      // # Read
      cout << "$ ";

      // Declaro la variable "input" que será una string
      string input;
      // Guardo lo que ingrese el usuario en "input"
      getline(cin, input);

      // # Evaluate and Print

      if (valid_commands.count(input)) {
        cout << "Comando reconocido: " << input << "\n";
      } else {
          // No finalizo con endl porque tenemos el modo ubitbuf activado, solo hago un salto de línea
          cout << input << ": command not found\n";
      };

  };

}