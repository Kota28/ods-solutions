#include <iostream>
#include <string>
#include <map>
#include <utility> 
using namespace std;

int main(){
  map<pair<size_t, string>,int> lines;
  map<pair<size_t, string>,int>::iterator a;
  map<pair<size_t, string>,int>::iterator b;
  for (string line; getline(cin, line); ){
      pair<size_t,string> temp_pair = make_pair(line.length(),line);
      b = lines.find(temp_pair);
      if(b != lines.end()){
          b->second++;
      }else{
          lines.insert(map<pair<size_t, string>,int>::value_type(temp_pair,1));
      }
  }
  for(a = lines.begin();a != lines.end();++a){
      for(int i = 0;i<a->second;i++){
          cout << a->first.second << endl;
      }
  }
}