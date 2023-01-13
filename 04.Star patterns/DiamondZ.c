#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);
int space=rows-1;
int star=1;

  for(int i=1;i<=(rows*2)-1;i++){

     // 1st inner loop
     for(int j=1;j<=space;j++){
       printf(" ");
     }

     //2nd inner loop
     for(int j=1;j<=star;j++){
       printf("*");
     }
     // 3rd inner loop (optional)
     for(int j=1;j<=space;j++){
       printf(" ");
     }

    if(i<rows){
      star+=2;
      space--;
    }
    else{
      star-=2;
      space++;
    }
    printf("\n");
  }
}
