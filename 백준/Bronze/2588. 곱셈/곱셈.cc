#include <stdio.h>
int main(){
  int a, b, x, y, z;

  scanf("%d %d", &a, &b);

  x = b/100; //100의 자리
  y = (b%100)/10; //10의 자리
  z = ((b%100)%10)/1; //1의 자리
  printf("%d\n", a*z);
  printf("%d\n", a*y);
  printf("%d\n", a*x);
  printf("%d\n", a*b);
  


  return 0;
}