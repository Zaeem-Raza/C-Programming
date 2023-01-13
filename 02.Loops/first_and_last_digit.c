#include <stdio.h>
int main(void){
  int firstdigit;
  int lastdigit;
  int num;
  printf("Enter an integer");
  scanf("%d",&num);

   lastdigit=num%10;
   printf("The last digit is:%d",lastdigit);

   while(num>=10){
     num/10;
   }
   firstdigit=num%10;
   printf("The first digit is:%d",firstdigit);

}
