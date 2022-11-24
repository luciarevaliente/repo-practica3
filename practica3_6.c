#include <stdio.h>

#define N 4

int main(){
  int i, c[N];
  int a[N]={1,2,3,4};
  int b[N]={5,6,7,8};
  
  while (i<4){
    c[i] = a[i] * b[i];
  }
  
  return 0;
}











