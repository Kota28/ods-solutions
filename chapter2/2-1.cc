void resize2(int m){
    ods::array<T> c(std::max(n+m,1));
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=n;i<n+m;i++){
        c[i]=0;
    }
}


void addAll(int i, MyArrayStack<T>& x) {
  resize2(x.size());
  for(int j=i;j<i+x.size();j++){
      set(j,x.get(j-i));
  }
}