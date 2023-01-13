#include <stdio.h>
int main(){
  int rows;

  printf("Enter number of rows");
  scanf("%d",&rows);
  while(rows<1){
    printf("Input Error\nEnter again");
    scanf("%d",&rows);
}
int star=1;
int space=rows-1;
 for(int i=1;i<=rows;i++){

    for(int j=1;j<=space;j++){
      printf(" ");
    }
    for(int j=1;j<=star;j++){
      if(i==1||i==star||j==1||j==star||i==rows){
      printf("*");
    }
    else{
      printf(" ");
    }
    }
    printf("\n");
    space--;
    star+=2;
 }


}
