#include <cstdlib>
#include <random>
#include <tuple>
#include <algorithm>
#include "ArrayStack.h"

template<class T>
class MyRandomQueue {
  ods::ArrayStack<T> as;
public:
  MyRandomQueue() :as() {}
  int size() {return as.size();}
  void add(T x) {as.add(x); }
  T remove() {
   int n=rand() % as.size();
   int a=as.get(as.size()-1);
   int b=as.get(n);
   as.set(n,a);
   as.set(as.size()-1,b);
   return as.remove(as.size() - 1);
  }
};