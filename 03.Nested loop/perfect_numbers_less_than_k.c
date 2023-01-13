/* printing all perfect numbers within the range given by user*/
#include <stdio.h>
int main(){
int k;
printf("Enter a number");
scanf("%d",&k);
while(k<1){
  printf("Wrong input\nEnter again");
  scanf("%d",&k);
}
int i=1;
printf("Perfect numbers are:");
while(i<=k){
 int sum=0;
             // check if perfect number
         for(int j=1;j<=i/2;j++){
           if(i%j==0){
             sum=sum+j;
           }
         }
 if(sum==i){
   printf("%d\t",i);
 }

  i++;
}
}
