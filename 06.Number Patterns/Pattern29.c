#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows");
  scanf("%d",&rows);

int a=rows;
  for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
      printf("%d",j);
    }
    a--;
    printf("\n");
  }
}
