#include <stdio.h>
int isStrong(int x);
int fact(int n);
void printStrong(int,int);
int main(){

  int lower;
  int upper;
printf("Enter the lower limit");
scanf("%d",&lower);
printf("Enter the upper limit");
scanf("%d",&upper);
  printStrong(lower,upper);

}
int fact(int n){
  int i=1;
  int factorial=1;
  while(i<=n){
     factorial*=i;
     i++;
  }
  return factorial;
}
int isStrong(int x){
int clone=x;
    int sum=0;
// separating digits
while(clone!=0){
  int rem =clone%10;
  sum=sum+fact(rem);
  clone/=10;
}
if(sum==x){
  return 1;
}
else{
  return 0;
}
}
void printStrong(int low,int high){
for(int i=low;i<=high;i++){
  if(isStrong(i)){
    printf("%d\t",i);
  }
}
}
