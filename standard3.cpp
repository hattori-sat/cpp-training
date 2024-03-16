#include<iostream>
#include"data.h"
#include "data.cpp"
#include"twostrings.h"
#include "twostrings.cpp"
#include "calculation.h"
#include "calculation.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  //prob3-1
  CData d;
  d.init();
  d.setNumber(100);
  d.setComment("prigramming C++");
  cout << "number = " <<d.getNumber()<<", comment = "<<d.getComment() <<endl;
  //prob3-2
  TwoStrings s;
  s.setString1("hello");
  s.setString2("world");
  cout << "一つ目の文字列は"<<s.getString1()<<endl;
  cout << "二つ目の文字列は"<<s.getString2()<<endl;
  cout << "合成した文字列は"<<s.getConnectedString()<<endl;
  cout << "合成した文字列の長さは"<<s.getConnectedLength()<<"文字"<<endl;
  //prob3-1
  Calculation c;
  c.setNumber1(8);
  c.setNumber2(9);
  cout<<c.getNumber1()<<"+"<<c.getNumber2()<<"="<<c.add()<<endl;
  cout<<c.getNumber1()<<"-"<<c.getNumber2()<<"="<<c.sub()<<endl;

  return 0;
}
