#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
  deque<string> lines;
  int num=0;
  for (string line; getline(cin, line); ){
      if(num<42){
          lines.push_front(line);
          num++;
      } else{
          if(line.empty()){
              cout << lines.back() << endl;
              lines.pop_back();
              lines.push_front(line);
          } else{
              lines.erase(lines.end());
              lines.push_front(line);
          }
      }
  }
}