#include <stdio.h>
void myFunc(int *p1,int *p2,int *p3){
    *p1+=45;
    *p2-=67;
    *p3*=2;
}
int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter integers: ");
    scanf("%d",&num1);
    printf("Enter second integer");
    scanf("%d",&num2);
    printf("Enter third integer");
    scanf("%d", &num3);
    int *p1=&num1;
    int *p2=&num2;
    int *p3=&num3;
    printf("Without passing to function: ");
    printf("Num1: %d\t Num2: %d\t Num3: %d",num1,num2,num3);
    myFunc(&num1,&num2,&num3);
    printf("\nAfter passing the values to function: \n");
    printf("Num1: %d\t Num2: %d\t Num3: %d", num1, num2, num3);
}