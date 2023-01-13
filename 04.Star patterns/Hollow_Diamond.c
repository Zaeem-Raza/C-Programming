#include <stdio.h>
int main(){
  int num;
  printf("Enter number of rows");
  scanf("%d",&num);
  while(num<0){
    printf("Invalid\n");
    printf("Enter number of rows");
    scanf("%d",&num);
  }
  int rows=num*2;
  int stars=num;
  int space=0;
    for(int i=1;i<rows;i++){

      for(int j=1;j<=stars;j++){
        printf("*");
      }
      for(int k=1;k<=space;k++){
        printf(" ");
      }

            for(int j=1;j<=stars;j++){
              printf("*");
            }
        if(i<num){
          stars--;
          space+=2;
        }
        else{
          stars++;
          space-=2;
        }
        printf("\n");
    }
}
