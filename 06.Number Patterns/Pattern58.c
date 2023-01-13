#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);
int num=0;
  for(int i=1;i<=rows;i++){
    printf("*");
     for(int j=1;j<=i;j++){
       printf("%d",j);
     }
     for(int j=i-1;j>=1;j--){
       printf("%d",j);
     }
     printf("*");
     printf("\n");

  }
  for(int i=rows-1;i>=1;i--){
    printf("*");
     for(int j=1;j<=i;j++){
       printf("%d",j);
     }
     for(int j=i-1;j>=1;j--){
       printf("%d",j);
     }
     printf("*");
     printf("\n");

  }

}
