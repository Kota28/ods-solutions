#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
  unordered_set<string> lines;
  for (string line; getline(cin, line); ){
      if(lines.find(line)!=lines.end()){
          cout << line << endl;
      } else{
          lines.insert(line);
      }
  }
}