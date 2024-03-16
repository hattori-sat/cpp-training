#include <iostream>
#include "number.h"
#include "number.cpp"
#include "hoge.h"
#include "hoge.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  //prob4-1
  Number* pN;
  pN = new Number();
  pN->setNumbers(1,2);
  cout<<pN->getAdd()<<endl;
  delete pN;
  //prob4-2
  Hoge* pH;
  pH = new Hoge();
  pH->foo();
  delete pH;
  //prob4-3
  int* num =new int[4];
  int i;
  for(i=0;i<4;i++){
    num[i]=i;
  }
  for(i=0;i<4;i++){
    cout<<"num["<<i<<"]="<< num[i]<<" ";
  }
  delete []num;
  cout<<endl;
  return 0;
}
