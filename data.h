#ifndef _CDATE_H_
#define _CDATE_H_

#include<iostream>
#include<string>

using namespace std;

class CData{
private:
  int number;
  string comment;
public:
  void init();
  void setNumber(int num);
  void setComment(string com);
  int getNumber();
  string getComment();
};
#endif //_CDATE_H_
