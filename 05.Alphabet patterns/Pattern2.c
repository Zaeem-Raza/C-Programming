#include <stdio.h>
int main(){
  int rows;

  printf("Enter number of rows");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++){
int ch=65;
       for(int j=1;j<=i;j++){
         printf("%c",ch);
         ch++;
       }
       printf("\n");
  }
}
