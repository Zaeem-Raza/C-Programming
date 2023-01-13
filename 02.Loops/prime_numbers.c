                                                      /*Finding a prime number */
#include <stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
while(num<2){
  printf("Wrong input\nEnter again");
  scanf("%d",&num);
}
int i=2;
while(i<=num/2&&rem==0){
  rem=num%i;
  i++;
}

}
