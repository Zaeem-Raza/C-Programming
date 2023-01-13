            /*pascal's triangle*/

#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter again");
    scanf("%d",&num);
  }
  for(int i=0;i<=num;i++){
    for(int j=1;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
}
