#include <stdio.h>
int isPrime(int );
void printPrime(int low,int high);
int main(){
  int lower;
  int upper;
printf("Enter the lower limit");
scanf("%d",&lower);
printf("Enter the upper limit");
scanf("%d",&upper);
  printPrime(lower,upper);
printPrime(lower,upper);
}

int isPrime(int x){
int flag =1;
for(int i=2;i<=x/2;i++){
  if(x%i==0){
    return 0;;
  }
}
if(flag==1){
  return 1;
}
else{
  return 0;
}
}
void printPrime(int low,int high){
   for(int i=low;i<=high;i++){
     if(isPrime(i)){
       printf("%d\t",i);
     }
   }
}
