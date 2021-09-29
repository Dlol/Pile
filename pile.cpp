#include "pile.hpp"
#include <stdexcept>

template <class T>
void nstd::pile<T>::push(T const& element){
  elems.push_back(element);
}

template <class T>
void nstd::pile<T>::push(T* elements, size_t n){
  for(int i = 0; i < n; i++){
    elems.push_back(elements[i]);
  }
}

template <class T>
T nstd::pile<T>::pop(){
  if(elems.empty()){
    throw std::invalid_argument( "there is nothing on the pile" );
  }
  int random = genRand() % elems.size();
  T out = elems.at(random);
  elems.erase(elems.begin() + random);
  return out;
  // heeh random
}

template <class T>
T nstd::pile<T>::get(){
  if(elems.empty()){
    throw std::invalid_argument( "there is nothing on the pile" );
  }
  srand(time(NULL));
  int size = static_cast<int>(elems.size());
  return elems.at(genRand() % size);
}

template <class T>
nstd::pile<T>::pile(T const& element){
  elems.push_back(element);
}

template <class T>
nstd::pile<T>::pile(T* elements, size_t n){
  for(int i = 0; i < n; i++){
    elems.push_back(elements[i]);
  }
}

template <class T>
nstd::pile<T>::pile(){}

template <class T>
int nstd::pile<T>::genRand(){
  int thyme = time(NULL);
  if(thyme == prevTime){
    timeGen++;
    thyme += timeGen;
  }
  else{
    timeGen = 0;
    prevTime = thyme;
  }
  srand(thyme);
  return rand();
}