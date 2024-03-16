#include<iostream>
#include<string>

//chcp 65001をいれないと文字化けします。
//cl /source-charset:utf-8 source.cpp
using namespace std;

int  main(int argc, char const *argv[]) {
  int a,b,c;
  string t,s,u,v;
  //prob1-1
  std::cout << "C++" << '\n'<<std::endl;
  //prob1-2
  std::cout << "ONE TWO THREE" <<"\n"<<"FOUR FIVE SIX"<< '\n'<<endl;
  //prob1-4
  std::cout << "数値を入力してください:" ;
  std::cin >> a;
  std::cout << a<<"を2倍すると" <<a*2<<"です."<< endl ;
  //prob1-5
  std::cout << "1つ目の数：";
  std::cin >> b ;
  std::cout<<"2つ目の数：";
  std::cin >> c;
  std::cout << b << "+"<<c<<"="<<b+c<<endl;
  std::cout << b<<"-"<<c<<"="<<b-c<<endl<<endl;
  //prob1-6
  t = "姓を入力してください：";
  s = "命を入力してください：";
  std::cout << t;
  std::cin >> u;
  std::cout << s;
  std::cin >> v;
  std::cout << "名前は「" <<u<<v<<"」です。"<< '\n'<<endl;




  return 0;
}
