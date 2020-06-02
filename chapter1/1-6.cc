#include <iostream>
#include <string>
#include <set>
#include<algorithm>
using namespace std;

int main(){
  set<pair<int,string>> lines;
  for (string line; getline(cin, line); ){
      lines.insert(make_pair((int)(line.length()),line));
  }
 for (auto x : lines) {
        cout << x.second << endl;
    }
}