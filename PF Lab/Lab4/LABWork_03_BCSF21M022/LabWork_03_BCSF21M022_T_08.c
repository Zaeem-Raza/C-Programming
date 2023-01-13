                                      /*  Perfect number*/

#include <stdio.h>
int main(){
  int num;
  printf("Enter number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter again");
    scanf("%d",&num);
  }
int i=1;
int Ans=0;
  while(i<num){
    if(num%i==0){
      Ans=Ans+i;
    }
    i++;
  }
  if(Ans==num){
    printf("%d is a perfect number",num);
  }
  else{
    printf("%d is not a perfect number",num);
  }
}
