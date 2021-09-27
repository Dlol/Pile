#include "pile.hpp"
#include <stdexcept>

template <class T>
void pile<T>::push(T const& element){
  elems.push_back(element);
}

//template <class T>
//void pile<T>::push(T *const element){
//  elems.push_back(element);
//}

template <class T>
T pile<T>::remove(){
  if(elems.empty()){
    isEmpty = true;
    throw std::invalid_argument( "there is nothing on the pile" );
  }
  srand(time(NULL));
  int random = rand() % elems.size();
  T out = elems.at(random);
  elems.erase(elems.begin() + random);
  if(elems.empty()){
    isEmpty = true;
    return out;
  }
  isEmpty = false;
  return out;
  // heeh random
}

template <class T>
T pile<T>::get(){
  if(elems.empty()){
    throw std::invalid_argument( "there is nothing on the pile" );
  }
  srand(time(NULL));
  int size = static_cast<int>(elems.size());
  return elems.at(rand() % size);
}

template <class T>
pile<T>::pile(){
  
}