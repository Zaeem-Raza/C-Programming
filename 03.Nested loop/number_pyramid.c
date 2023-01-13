/* printing all perfect numbers within the range given by user*/
#include <stdio.h>
int main(){
  int k;
  puts("Enter an integer");
  scanf("%d",&k);
  while(k<1){
    puts("Wrong input");
    scanf("%d",&k);
  }
  int a=k-1;
  int b=1;

  for(int i=1;i<=k;i++){

    // for space
       for(int j=1;j<=a;j++){
         printf("  ");
       }
       //for integer
       for(int l=1;l<=b;l++){
         printf("%d ",l);
       }
       for(int j=1;j<=a;j++){
         printf("  ");
       }
       puts("\n");
       a=a-1;
       b=b+2;
  }
  a=a+1;
  b=b-2;
    for(int i=1;i<=k;i++){
      a=a+1;
      b=b-2;
      // for space
         for(int j=1;j<=a;j++){
           printf("  ");
         }
         //for integer
         for(int l=1;l<=b;l++){
           printf("%d ",l);
         }
         for(int j=1;j<=a;j++){
           printf("  ");
         }
         puts("\n");

    }

}
