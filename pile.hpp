#ifndef _PILE_HPP
#define _PILE_HPP
#include <vector>
#include <stdlib.h>
#include <time.h>

namespace nstd{
  template <class T>
  class pile{
    private:
      std::vector<T> elems;
      int prevTime = 0;
      int timeGen = 0;
      int genRand();
    public:
      void push(T const&);
      void push(T*, size_t);
      
      T pop();
      bool empty(){
        return elems.empty();
      }
      T get();
      
      // constructors just mimic push()
      pile();
      pile(T const&);
      pile(T*, size_t);
  };
}
#endif