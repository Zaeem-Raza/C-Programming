#include <stdio.h>
int main(){
int num;
int flag=1;  // flag variable
printf("Enter a number");
scanf("%d",&num);
while(num<='a'&&num>='z'){
  printf("Not an integer\nEnter again");
  scanf("%d",&num);
}
while(num<0){
  printf("not a positive number");
  printf("\nEnter again");
  scanf("%d",&num);
}
if(num>=0&&num<2){
  flag=0;
}
for(int i=1;i<num/2;i++){
  if(num%i==0){
    flag=0;
  }
}
if(flag==1){
  printf("%d is a prime number",num);
}
else{
  printf("%d is not a prime number",num);
}
}
