                           /*prime numbers within the range given by user*/
#include <stdio.h>
int main(){
  int k;
  int x=1;
  int count=0;
  // int var2;
  printf("Enter an integer");
  scanf("%d",&k);
  while(k<1){
    printf("Wrong input\nEnter again");
    scanf("%d",&k);
  }

  printf("The first %d prime numbers are: ",k);
  while(count<=k){
    int flag=0;

          //checking if prime
          for(int i=2;i<=x/2;i++){
            if(x%i==0){
              flag=1;
            }
          }
          if(flag==0){  //prime is true
            printf("\n%d",x);
            count+=1;
          }
          x++;
  }

}
