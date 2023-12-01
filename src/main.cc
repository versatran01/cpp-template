#include <iostream>

#include "header.h"
#include "library.h"

enum class Color {
  RED,
  GREEN,
  BLUE,
};

int main(int argc, char** argv) {
  std::cout << "Add: " << cpp::add(1, 2) << std::endl;
  std::cout << "Subtract: " << cpp::subtract(2, 1) << std::endl;
}