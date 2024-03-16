#include "function.h"

int Function::max(int n1,int n2){
  int max;
  max=n1;
  if(max<=n2){
    max=n2;
  }
  return max;
}
int Function::min(int n1,int n2){
  int min;
  min=n1;
  if(min>=n2){
    min = n2;
  }
  return min;
}
