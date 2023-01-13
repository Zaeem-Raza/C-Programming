#include <stdio.h>
int main(){
  int range;
  int i=1;  // starting point
  printf("Enter range");
  scanf("%d",&range);
  while(range<0){
    printf("Error\nEnter Again");
    scanf("%d",&range);
  }

//finding perfect numbers witin this range
printf("The perfect numbers within this range are:");
  while(i<=range){
       int sum=0;
          for(int j=1;j<=i/2;j++){

                  if(i%j==0){
                  sum=sum+j;
              }

  }
  if(sum==i){  //if perfect number
    printf("%d, ",i);
  }
  i++;
}
}
