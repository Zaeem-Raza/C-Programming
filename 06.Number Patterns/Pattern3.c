#include <stdio.h>
int main(){
  int rows;
  int columns;
  printf("Enter number of rows");
  scanf("%d",&rows);
  printf("Enter number of columns");
  scanf("%d",&columns);

  for(int i=1;i<=rows;i++){

    //inner loop
        for(int j=1;j<=columns;j++){
          if(j%2==0){
            printf("0");
          }
          else{
            printf("1");
          }

        }
          printf("\n");
  }
}
