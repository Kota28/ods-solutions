#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
  stack<string> lines;
  int number=0;
  for (string line; getline(cin, line); ){
      lines.push(line);
      number++;
      if(number==50){
          while(!lines.empty()){
              cout << lines.top() << endl;
              lines.pop();
          }
          number=0;
      }
  }
  while(!lines.empty()){
      cout << lines.top() << endl;
      lines.pop();
  }
}

