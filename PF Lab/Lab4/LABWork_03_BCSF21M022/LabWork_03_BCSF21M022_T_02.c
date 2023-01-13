#include <stdio.h>
int main(){
  int num;
  printf("Enter number of rows");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter again");
    scanf("%d",&num);
  }

// actual program
int a=num; //for empty space
int b=1;  // for stars *

for(int i=1;i<=num;i++)  /*outer loop as number of rowss*/ {

        //1st inner loop
    for(int j=1;j<=a;j++){
      printf(" ");
    }
    //2nd inner loop
    for(int k=1;k<=b;k++){
      printf("*");
    }
    // 3rd inner loop
    for(int j=1;j<=a;j++){
      printf(" ");
    }
    printf("\n");
    a=a-1;  // decrement in spaces
    b=b+2; // increment in the number of stars by 2
}

}
