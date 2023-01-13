// *******
// 7777777
// ******
// 666666
// *****
// 55555
// ****
// 4444
// ***
// 333
// **
// 22
// *
#include <stdio.h>
int main(){
  int num;
  printf("ENter a number");
  scanf("%d",&num);
  int rows=num*2;
  for(int i=rows;i>=1;i--){

    for(int j=num;j>=1;j--){
      printf("*");
    }
    printf("\n");
    for(int k=num;k>=1;k--){
      printf("%d",num);
    }
    printf("\n");
    num--;
  }
}
