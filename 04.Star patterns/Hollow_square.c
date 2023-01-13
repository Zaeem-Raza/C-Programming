#include <stdio.h>
int main(){
  int rows;
  int columns;
  printf("Enter number of rows:");
  scanf("%d",&rows);
  // printf("Enter number of columns");
  // scanf("%d",&columns);
 for(int i=1;i<=rows;i++){
   for(int j=1;j<=rows;j++){
     if(i==1||i==rows||j==1||j==rows){
     printf("*");
   }
   else{
     printf(" ");
   }
   }
   printf("\n");
 }
}
