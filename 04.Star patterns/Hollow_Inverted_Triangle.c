#include <stdio.h>
int main(){
  int rows;

  printf("Enter number of rows");
  scanf("%d",&rows);
  while(rows<1){
    printf("Input Error\nEnter again");
    scanf("%d",&rows);
}
int temp=rows;
 for(int i=1;i<=rows;i++){
   for(int j=1;j<=temp;j++){
     if(j==1||j==temp||i==1){
     printf("*");
   }
   else{
     printf(" ");
   }
   }
   temp--;
   printf("\n");
 }

}
