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
          if(i==1||j==1||i==rows||j==columns){
            printf("1");
          }
          else{
            printf("0");
          }

        }
          printf("\n");
  }
}
