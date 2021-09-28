#include <iostream>
#include "pile.cpp"

int main() {
  std::cout << "Hello World!\n";

  nstd::pile<int> test;
  for (int i = 0; i < 5; i++){
    test.push(1);
    test.push(3);
    test.push(2);
    std::cout << test.remove() << std::endl;
    std::cout << test.remove() << std::endl;
    std::cout << test.remove() << std::endl;
    std::cout << time(NULL) << std::endl;
  }
}