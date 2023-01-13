#include <stdio.h>
int main(){
int rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
int space=0;
int star=rows;
for(int i=1;i<=(rows*2)-1;i++){

    for(int j=1;j<=space;j++){
      printf(" ");
    }
    for(int j=1;j<=star;j++){
      printf("*");
    }
printf("\n");
    if(i<rows){
      star--;
      space+=2;
    }
    else{
      star++;
      space-=2;
    }
}
}
