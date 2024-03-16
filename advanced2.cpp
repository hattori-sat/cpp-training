#include "bar.h"
#include"foo.h"
#include"bar.cpp"
#include"foo.cpp"
#include<iostream>
#include<string>
//cl /source-charset:utf-8 advanced2.cpp /EHsc
using namespace std;

int main(){
    
    Foo* pFoo=0;
    Bar* pBar=0;
    pFoo=new Foo();
    pBar=new Bar();

    pFoo->hoge();
    pBar->func2();
    pFoo->fuga(pBar);
    pBar->func1(pFoo);
    string input;
    cin>>input;
    return 0;
}
