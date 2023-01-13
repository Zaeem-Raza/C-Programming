#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);
  int i=1;
  while(i<=10){
    printf("%d * %d = %d\n",num,i,num*i);
    i++;
  }
}
