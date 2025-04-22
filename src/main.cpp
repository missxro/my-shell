#include <iostream>

int main() {
  // Flush after every std::cout / std:cerr
  // Activa el modo "unitbuf" (unbuffered) para el stdout y stderr
  // Imprimirá inmediatamente sin esperar a que el bufer se llene (no hay que poner endl)
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Uncomment this block to pass the first stage
  std::cout << "$ ";

  std::string input;
  std::getline(std::cin, input);
}