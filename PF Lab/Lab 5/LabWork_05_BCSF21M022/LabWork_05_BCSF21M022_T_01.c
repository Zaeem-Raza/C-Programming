#include <stdio.h>
int Function(int x);
int main(){
  int num;
printf("Enter the number of not");
scanf("%d",&num);
while(num<0){
  printf("Invalid Input\nEnter the number of not");
  scanf("%d",&num);
}
 int not=Function(num);
 if(not){
   printf("It is False");
 }
 else{
   printf("It is true");
 }
}
int Function(int x){
if(x%2==0){
  return 0;
}
else{
  return 1;
}
}
