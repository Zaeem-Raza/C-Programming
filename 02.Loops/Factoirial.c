/*Factorial of a number*/

#include <stdio.h>
int main(){
int num;
int fact=1;
int i=1;
printf("Enter a number: ");
scanf("%d",&num);
while(num<1){
printf("Wrong Input\nEnter a number");
scanf("%d",&num);
}
while(num>16){
printf("Integer datatype cannot calculate factorial of a number that is greater than 16  :/");
printf("enter again");
scanf("%d",&num);
}

while(i<=num){
fact=fact*i;
i++;
}
printf("The factorial of %d is %d",num,fact);

}
