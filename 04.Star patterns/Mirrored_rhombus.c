#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);

int space=0;
  for(int i=1;i<=rows;i++){

    for(int j=1;j<=space;j++){
      printf(" ");
    }
      for(int j=1;j<=rows;j++){
        printf("*");
      }
      printf("\n");
      space++;
  }
}
