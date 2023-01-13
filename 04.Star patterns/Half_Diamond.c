#include <stdio.h>
int main(){
int rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    int star=1;


    for( int i=1;i<rows*2;i++){

      for(int j=1;j<=star;j++){
        printf("*");
      }

      if(i<rows){
        star++;
      }
      else{
        star--;
      }
        printf("\n");
    }


}
