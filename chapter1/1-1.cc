#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
  stack<string> lines;
  for (string line; getline(cin, line); ){
      lines.push(line);
  }
  while(!lines.empty()){
      cout << lines.top()<<endl ;
      lines.pop();
  }
}
