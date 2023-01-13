#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);
int count=(rows*2)-1;
  for(int i=1;i<=count;i++){

     for(int j=1;j<=count;j++){
       if(j==i||j==count-i+1){
         printf("*");
       }
       else{
         printf(" ");
       }
     }
     printf("\n");
  }
}
