                               /*  Star shaped  empty triangle  */

#include <stdio.h>
int main(){
  int num;
  printf("Enter number of rows");
  scanf("%d",&num);
  while(num<1){
    printf("Wrong input\nEnter again");
    scanf("%d",&num);
  }

  int a=num;  // for stars *
  int b=0;  // for empty space

  // outer loop
  for(int i=1;i<=num;i++){

      //1st inner loop. this will give us stars
    for(int j=1;j<=a;j++){
      printf("*");
    }
    // 2nd inner loop for empty space
    for(int k=1;k<=b;k++){
       printf(" ");
    }
    //3rd inner loop for other side of stars
    for(int l=1;l<=a;l++){
      printf("*");
    }

    printf("\n");
    a=a-1;
    b=b+2;
  }
}
