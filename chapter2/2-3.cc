#include "ArrayDeque.h"
#include "array.h"
#include "utils.h"

template<class T>
class MyTreque {
  ods::ArrayDeque<T> ad,bd;
public:
  MyTreque() :ad() {}
  int size() { return ad.size()+bd.size(); }
  T get(int i) {
      if(i<ad.size()){
          return ad.get(i);
      } else{
          return bd.get(i-ad.size());
      }
  }
  T set(int i, T x) {
      if(i<ad.size()){
          return ad.set(i,x);
      } else{
          return bd.set(i-ad.size(),x);
      }
  }
  void add(int i, T x) {
      if(i<ad.size()){
          ad.add(i,x);
      } else{
          bd.add(i-ad.size(),x);
      }
      if(ad.size()==(bd.size()+2)){
          bd.add(0,ad.remove(ad.size()-1));
      } else if(bd.size()==(ad.size()+2)){
          ad.add(ad.size(),bd.remove(0));
      }
  }
  T remove(int i) {
      T rem;
      if(i<ad.size()){
          rem=ad.remove(i);
      } else{
          rem=bd.remove(i-ad.size());
      }
      if(ad.size()==(bd.size()+2)){
          bd.add(0,ad.remove(ad.size()-1));
      } else if(bd.size()==(ad.size()+2)){
          ad.add(ad.size(),bd.remove(0));
      }
      return rem;
  }
  void clear() { ad.clear(); }
};