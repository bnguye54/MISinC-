 #include <map>
#include <array>
#include <string>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename N>
class Num {

public:
  string name;
  N valN;
  Num(string n, N val){
    name = n;
    valN = val;
  }
  N getVal(){
    return valN;
  }
  N setVal(int n){
    valN = n;
    return valN;
  }

};

class intNum : public Num<int> {
public:
  int value;
  intNum(string name,int val) : Num(name,val) {
    value = val;
  }
};

class stringNum : public Num<string> {
public:
  string value;
  stringNum(string name,string val) : Num(name,val) {
    value = val;
  }
};



template<typename T> T ADD(T v) { return v; }
template<typename T> T SUB(T v) { return v; }
template<typename T> T DIV(T v) { return v; }
template<typename T> T MULT(T v) { return v; }

template<typename T, typename... Args>
T ADD(T first, Args... args) {
  return first + ADD(args...);}

template<typename T, typename... Args>
T SUB(T first, Args... args) {
  return first - SUB(args...);}

template<typename T, typename... Args>
T DIV(T first, Args... args) {
  return first - DIV(args...);}


template<typename T, typename... Args>
T MULT(T first, Args... args) {
  return first * MULT(args...);}

int main(){
  
}


//MULT(4,6,7,8);










  /*
  cout<< myNum.getVal()<<endl;
  myNum.setVal(ADD(myNum.getVal(), i1, i2));
  cout<<"myNum = " << myNum.getVal()<<endl;
  cout<< ADD(myNum.getVal(), i1, i2)<<endl;
  
}
*/