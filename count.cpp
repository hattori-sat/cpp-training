#include "count.h"

Count::Count():m_count(0){
}
void Count::reset(){
  m_count=0;
}
int Count::getCount(){
  return m_count;
}
void Count::count(){
  m_count++;
}
void Count::count(int number){
  for(int i=0;i<number;i++){
    m_count++;
  }
}
