#include <iostream>
#include "count.h"
#include "count.cpp"
#include "vector.h"
#include "vector.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Count *pC = new Count();
  pC->count();
  pC->count();
  cout<<"回数"<<pC->getCount()<<"回"<<endl;
  pC->count(4);
  cout<<"回数"<<pC->getCount()<<"回"<<endl;
  pC->reset();
  cout<<"回数"<<pC->getCount()<<"回"<<endl;
  delete pC;

  Vector *v1,*v2;
  v1 = new Vector();
  v2 = new Vector(1.1,2.3);
  v1->set(3.8,2.7);
  cout<<"v1 = ("<<v1->getX()<<","<<v1->getY()<<")"<<endl;
  cout<<"v2 = ("<<v2->getX()<<","<<v2->getY()<<")"<<endl;
  return 0;
}
