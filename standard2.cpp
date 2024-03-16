#include<iostream>
#include "keisan.h"
#include "keisan.cpp"
#include "minmax.h"
#include "minmax.cpp"
//cl /source-charset:utf-8 standard2.cpp /EHsc
using namespace std;

int main(int argc, char const *argv[]) {
  //prob2-1
  Keisan k;
  k.a=4;
  k.b=3;
  std::cout << k.a<<"+"<<k.b<<"="<<k.add()<<endl;
  std::cout << k.a<<"-"<<k.b<<"="<<k.sub()<<'\n';
  //prob2-2
  int a=4;
  int b=2;
  int c=7;
  MinMax m;
  std::cout << a<<"と"<<b<<"と"<<c<<"のうち、最大のものは"<<m.max(a,b,c)<<endl;
  std::cout << a<<"と"<<b<<"と"<<c<<"のうち、最小のものは"<<m.min(a,b,c)<<endl;
  return 0;
}
