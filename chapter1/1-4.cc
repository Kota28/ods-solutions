#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
  unordered_set<string> lines;
  for (string line; getline(cin, line); ){
      if(lines.count(line)==0){
          lines.insert(line);
          cout << line << endl;
      }
  }
}