// this program gets an integer from the user and prints its table uptil 10
#include <stdio.h>
int main(){

  int num;
  printf("Enter an integer");
  scanf("%d",&num);
  int i=1;
 do {
    int Ans=i*num;
    printf("%d*%d= %d\n",num,i,Ans);
    i++;
  }  while(i<=10);
}
