#include<iostream>
#include"fighter.h"
#include"fighter.cpp"
#include"airplane.h"
#include"airplane.cpp"
#include"fundcalc.h"
#include"fundcalc.cpp"//In many case,we don't need
#include"newcalc.h"
#include"newcalc.cpp"
//cl /source-charset:utf-8 standard6.cpp /EHsc
using namespace std;

int main(){
  //prob6-1
  //use fighter.h & airplane.h
  Fighter f;
  Airplane a;
  a.fly();
  f.fly();
  f.fight();

  //prob6-2
  //use fundcalc.h & newcalc.h
  NewCalc n;
  n.setNumber1(10);
  n.setNumber2(2);
  cout<<n.getNumber1()<<"+"<<n.getNumber2()<<"="<<n.add()<<endl;
  cout<<n.getNumber1()<<"-"<<n.getNumber2()<<"="<<n.sub()<<endl;
  cout<<n.getNumber1()<<"*"<<n.getNumber2()<<"="<<n.mul()<<endl;
  cout<<n.getNumber1()<<"/"<<n.getNumber2()<<"="<<n.div()<<endl;

}
