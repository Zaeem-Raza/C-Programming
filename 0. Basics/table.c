#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);
   int i=1;
   while(i<=10){
     printf("%d\n",num*i);
     i++;
   }
}
