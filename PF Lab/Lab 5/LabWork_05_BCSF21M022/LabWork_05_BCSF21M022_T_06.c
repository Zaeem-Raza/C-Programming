#include <stdio.h>
int fact(int x);
int isStrong(int y);
int main(){
int num;
    printf("Enter a number");
    scanf("%d",&num);
   int strong=isStrong(num);
   if(strong){
     printf("The given number is a strong number");
   }
   else{
     printf("Not a strong");
   }
}
int fact(int x){
  int i=1;
  int factorial=1;
  while(i<=x){
    factorial=factorial*i;
    i++;
  }
  return factorial;
}
int isStrong(int num){
  int sum=0;
  int clone=num;
     while(clone!=0){
         int r=clone%10;
         sum=sum+fact(r);
         clone/=10;
     }
     if(sum==num){
    return 1;
     }
     else{
  return 0;
     }

}
