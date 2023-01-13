#include <stdio.h>
int main() {
int num;
int digit;
int temp = 9999;
int flag = 0; // Using for Terminating Loop

printf("Enter Number: ");
scanf("%d", &num);

while(num != 0 && flag == 0) {

  digit = num % 10;
  if(digit <= temp) {
    temp = digit;
    num = num / 10;
  }
  else {
    printf("Not an Ascending Number");
    flag = 1;
  }
}
if(flag == 0)  {
  printf("Ascending Number");
}
return 0;
}
