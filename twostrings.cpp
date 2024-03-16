#include "twostrings.h"

void TwoStrings::setString1(string s){
  m_string1 = s;
}
void TwoStrings::setString2(string s){
  m_string2 = s;
}
string TwoStrings::getString1(){
  return m_string1;
}
string TwoStrings::getString2(){
  return m_string2;
}
string TwoStrings::getConnectedString(){
  /*
  string s,t;
  s = m_string1;
  t = s.append(m_string2);
  return t;
  */
  return m_string1 + m_string2;
}

int TwoStrings:: getConnectedLength(){
  /*
  int i;
  string m;
  m = getConnectedString();
  i = m.length();
  return i;
  */
  return TwoStrings::getConnectedString().length();
}
