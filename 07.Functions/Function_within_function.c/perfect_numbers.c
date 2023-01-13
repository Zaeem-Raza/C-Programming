#include <stdio.h>
int isPerfect(int x);
void printPerfect(int low,int high);
int main(){
  int lower;
  int upper;
printf("Enter the lower limit");
scanf("%d",&lower);
printf("Enter the upper limit");
scanf("%d",&upper);
  printPerfect(lower,upper);

}
int isPerfect(int x){
int sum=0;
for(int i=1;i<x;i++){
  if(x%i==0){
    sum+=i;
  }
}
if(sum==x){
  return 1;
}
else{
  return 0;
}
}
void printPerfect(int low,int high){
for(int j=low;j<=high;j++){
  if(isPerfect(j)){
    printf("%d\t",j);
  }
}
}
