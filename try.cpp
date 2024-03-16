#include<stdio.h>
#include<stdlib.h>
int judge(int x);

int main(){
  int years;
  int result;
  printf("How old are you?  : ");
  scanf("%d",&years);
  printf("\n");
  if(years<0){
    years=abs(years);
  }
  if(years==0||years==1){
    printf("can't judge!");
  }
  result = judge(years);
  if(years>=2){

    if(result==0){
      printf("your age is prime number.\n");
    }
    if(result==1){
      printf("Your age is composite number.\n");
    }
  }
  return 0;
}
int judge(int x){
  int i;
  int remainder;
  for(i=2;i<x;i++){
    remainder = x % i ;
    if (remainder==0){
      return 1;
    }
  }
  return 0;
}
