#include <iostream>
#include "pile.cpp"

int main() {
  std::cout << "Hello World!\n";

  pile<int> test;
  test.push(3);
  test.push(12);
  std::cout << test.remove() << std::endl;
  std::cout << test.remove() << std::endl;
  std::cout << test.remove() << std::endl;
}