#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  vector<string> lines;
  int num=0;
  for (string line; getline(cin, line); ){
      lines.push_back(line);
      num++;
  }
  if(num%2==0){
      for(int i=0;i<=((num-2)/2);i++){
          cout << lines[2*i] << endl;
      }
      for(int i=1;i<=(num/2);i++){
          cout << lines[2*i-1] << endl;
      }
  } else{
      for(int i=0;i<=((num-1)/2);i++){
          cout << lines[2*i] << endl;
      }
      for(int i=1;i<=((num-1)/2);i++){
          cout << lines[2*i-1] << endl;
      }
  }
}