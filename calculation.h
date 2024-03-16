#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>
#include<string>

class Calculation{
public:
  void setNumber1(int n1);
  void setNumber2(int n2);
  int getNumber1();
  int getNumber2();
  int add();
  int sub();
private:
  int m_num1;
  int m_num2;
};

#endif // _CALCULATION_H_
