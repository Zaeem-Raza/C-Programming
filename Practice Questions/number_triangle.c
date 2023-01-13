                                                              /*1
                                                                1 2
                                                                1 2 3
                                                                1 2 3 4
                                                                1 2 3 4 5...*/
#include <stdio.h>
int main(){
int rows;
printf("Enter number of rows");
scanf("%d",&rows);
while(rows<0){
  printf("Wrong input\nEnter again");
  scanf("%d",&rows);
}
for(int i=1;i<=rows;++i){
  for(int j=1;j<=i;++j){
    printf("%d\t",j);
  }
  printf("\n");
}
}
