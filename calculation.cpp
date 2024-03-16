#include "calculation.h"

void Calculation::setNumber1(int n1){
  m_num1 = n1;
}
void Calculation::setNumber2(int n2){
  m_num2 = n2;
}
int Calculation::getNumber1(){
  return m_num1;
}
int Calculation::getNumber2(){
  return m_num2;
}
int Calculation::add(){
  return m_num1 + m_num2;
}
int  Calculation::sub(){
  return m_num1 - m_num2;
}
