#include <stdio.h>
void square(int a){
  printf("Enter a number");
  scanf("%d",&a);
  printf("The square of this number is: %d",a*a);
}

void cube(int b){
printf("Enter a number");
scanf("%d",&b);
printf("The cube of this number is :%d",b*b*b);
}

int main(){
  int choice;
  int x;
do{
  printf("Enter your Choice\n");
  printf("Enter 1 for calculating square\n");
    printf("Enter 2 for calculating cube\n");
    scanf("%d",&choice);
}while(choice<1||choice>2);

switch (choice) {
  case 1:
         square(x);
         break;
  case 2:
       cube(x);
       break;
  default:
       printf("invalid input");

}
}
