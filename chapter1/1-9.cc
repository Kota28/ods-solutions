#include <iostream>
#include <string>
#include <vector>
#include<random>
#include<algorithm>
#include <chrono>       
using namespace std;

int main(){
    vector<string> lines;
  for (string line; getline(cin, line); ){
      lines.push_back(line);
  }
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  shuffle(lines.begin(),lines.end(),std::default_random_engine(seed));
  for(int i=0;i<int(lines.size());i++){
      cout << lines[i] << endl;
  }
}