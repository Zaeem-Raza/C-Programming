                    /* take an integer from the user and print the previous 5 odd numbers
                    for example if the user enters 19
                    the output is 17,15,13,11,9*/

#include <stdio.h>
int main(){
  int num;
  printf("Enter a positive integer");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input");
    printf("Enter again");
    scanf("%d",&num);
  }
  for(int i=0;i<=5;i++){
    if(num%2==0){
      num--;
    }
    else{
      printf("%d\n",num-2);
    }
    num=num-2;
  }
}
