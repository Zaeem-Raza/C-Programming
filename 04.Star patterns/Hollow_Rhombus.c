#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);

int space=rows-1;
  for(int i=1;i<=rows;i++){

    for(int j=1;j<=space;j++){
      printf(" ");
    }
      for(int j=1;j<=rows;j++){
        if(i==1||i==rows||j==1||j==rows){
        printf("*");
      }
      else{
        printf(" ");
      }
      }
      printf("\n");
      space--;
  }
}
