#include <stdio.h>
int isArmstrong(int x);
int power(int base,int exp);
void printArmstrong(int low,int high);
int main(){
//   int lower;
//   int upper;
// printf("Enter the lower limit");
// scanf("%d",&lower);
// printf("Enter the upper limit");
// scanf("%d",&upper);
//   printArmstrong(lower,upper);
printf("%d",isArmstrong(370));
}


int power(int base,int exp){
  int Answer=1;;
  for(int i=1;i<=exp;i++){
Answer*=base;
  }
  return Answer;
}

int isArmstrong(int x){
  int sum=0;
  int count=0;
    int clone1=x;
  int clone2=x;
  // counting the number of digits
  while(clone1!=0){
    clone1/=10;
    count++;
    
  }
  while(clone2!=0){
    int rem=clone1%10;
    sum+=power(rem,count);
    clone2/=10;
  }
  if(sum==x){
    return 1;

  }
  else{
    return 0;
  }
}
void printArmstrong(int low,int high){
  for(int i=low;i<=high;i++){
    if(isArmstrong(i)){
      printf("%d\t",i);
    }
  }
}
