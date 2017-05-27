//
// Created by Marc Charbonneau on 5/26/17.
//

#ifndef TEMPLATECPP_MYCOLLECTION_H
#define TEMPLATECPP_MYCOLLECTION_H

#include "Circle.h"
#include <vector>
#include <iterator>
#include <fstream>
#include <iostream>

template <class T>
class MyCollection {
public:
  MyCollection()= default;
  ~MyCollection()= default;

  // implemented here
  void Add( const T&  x){
    _collection.push_back(x);
  }


  // implemented in .cpp
  T Get(int idx){
    return _collection.at(idx);
  }

  int Count() const{
    return _collection.size();
  }

  bool IsEmpty() const{
    return _collection.empty();
  }

  void PrintAll (std::ostream& os ) {
    typename std::vector<T>::iterator it;
    for (it = _collection.begin(); it != _collection.end(); ++it) {
      os<<*it<<" ";
    }
  }

  void PrintAllReverseOrder (std::ostream& os ){
    typename std::vector<T>:: reverse_iterator it;
    for (it =_collection.rbegin(); it != _collection.rend(); ++it) {
      os<<*it<<" ";
    }
  }

private:
  std::vector<T> _collection;
};

#endif //TEMPLATECPP_MYCOLLECTION_H
