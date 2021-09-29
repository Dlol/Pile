#include <iostream>
#include "pile.cpp"
#include <array>

int main() {
  std::cout << "Hello World!\n";

  nstd::pile<int> test;
  std::array<int, 12> ts = {0,1,2,3,4,5,6,7,8,9,10,11};
  test.push(ts.data(), ts.size());
  while(!test.isEmpty()){
  std::cout << test.remove() << std::endl;
  }
}