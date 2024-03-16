#include <iostream>

using namespace std;

void change1(int &n);
void change2(int *n);
void changeNumber(int&);
void swap(int&,int&);
int main(int argc, char const *argv[]) {
  //probex1-1
  int x = 7;
  int &n = x;
  cout<<"a="<<x<<endl;
  change1(x);//call by reference
  cout<<"a="<<x<<endl;
  change2(&n);//call by pointer
  cout<<"a="<<x<<endl;
  //probex1-2
  int m=5;
  cout<<"変更前 : "<<m<<endl;
  changeNumber(m);
  cout<<"変更後 : "<<m<<endl;
  //probex1-3
  int a=1,b=2;
  cout<<"a = "<<a<<" b = "<<b<<endl;
  swap(a,b);
  cout<<"a = "<<a<<" b = "<<b<<endl;

  return 0;
}
void change1(int &n){
  n+=3;
}
void change2(int *n){
  *n+=3;
}
void changeNumber(int& n){
  n *= 2;
}
void swap(int& a,int& b){
  int c;
  c=a;
  a=b;
  b=c;
}
