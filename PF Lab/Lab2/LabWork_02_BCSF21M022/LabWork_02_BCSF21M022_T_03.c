#include <stdio.h>
int main(){
  int num1, num2, num3;
  printf("Enter the first integer\n");
  scanf("%d",&num1);
  printf("Enter the second integer\n");
  scanf("%d",&num2);
  printf("Enter the third integer\n");
  scanf("%d",&num3);
if((num1>num2)&&(num1>num3)){
   printf("The order is \n%d\n",num1);
   if(num2>num3){
     printf("%d\n",num2);
     printf("%d\n",num3);
   }
   else if (num3>num2){
     printf("%d\n",num3);
     printf("%d\n",num2);
   }
}
else if((num2>num1)&&(num2>num3)){
  printf("The order is \n%d\n",num2);
  if(num1>num3){
    printf("%d\n",num1);
    printf("%d\n",num3);
  }
  else{
    printf("%d\n",num3);
      printf("%d\n",num1);
  }
}
else if((num3>num1)&&(num3>num2)){
  printf("The order is\n%d\n",num3);
  if(num2>num1){
    printf("%d\n",num2);
    printf("%d\n",num1);
  }
  else{
    printf("%d\n",num1);
    printf("%d\n",num2);
  }

}
}
