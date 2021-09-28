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
      //void push(T *const);
      
      T remove();
      bool isEmpty = true;
      T get();
      pile();
  };
}
#endif