#include "hoge.h"

using namespace std;

Hoge::Hoge(){
  cout<<"コンストラクト"<<endl;
}
Hoge::~Hoge(){
  cout<<"デストラクト"<<endl;
}
void Hoge::foo(){
  cout<<"fooメソッド"<<endl;
}
